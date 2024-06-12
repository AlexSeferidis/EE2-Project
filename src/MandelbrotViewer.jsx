import React, { useEffect } from 'react';

const MandelbrotViewer = ({ x, y, zoom, maxItr }) => {
  useEffect(() => {
    const canv = document.getElementById('mc');
    const ctx = canv.getContext('2d');
    const default_colors = [
      "#FF0000", "#FF1A00", "#FF3400", "#FF4E00", "#FF6800", 
      "#FF8200", "#FF9C00", "#FFB600", "#FFD000", "#FFEA00", 
      "#FFFF00", "#E4FF00", "#C9FF00", "#AFFF00", "#94FF00", 
      "#79FF00", "#5EFF00", "#44FF00", "#29FF00", "#0EFF00", 
      "#00FF0E", "#00FF29", "#00FF44", "#00FF5E", "#00FF79", 
      "#00FF94", "#00FFA9", "#00FFBD", "#00FFD2", "#00FFE7", 
      "#00FFFF", "#00E7FF", "#00D0FF", "#00B8FF", "#009FFF", 
      "#0087FF", "#006FFF", "#0057FF", "#003FFF", "#0027FF", 
      "#000FFF", "#0F00FF", "#2700FF", "#3F00FF", "#5700FF", 
      "#6F00FF", "#8700FF", "#9F00FF", "#B700FF", "#CF00FF",
      "#000000"
    ];
    const aspect_ratio = canv.width / canv.height;
    const depth_step = maxItr / default_colors.length;

    const within_radius_2 = (real, imag) => Math.sqrt(real ** 2 + imag ** 2) < 2;

    const get_color = (depth) => {
      for (let index = 0; index < default_colors.length; index++) {
        if (depth < depth_step * index) {
          return default_colors[index];
        }
      }
      return default_colors[default_colors.length - 1];
    };

    const get_divergence = (real, imag, depth) => {
      let real_old = real;
      let imag_old = imag;
      for (let index = 0; index < depth; index++) {
        if (within_radius_2(real_old, imag_old)) {
          let real_new = real_old ** 2 - imag_old ** 2 + real;
          let imag_new = 2 * real_old * imag_old + imag;
          real_old = real_new;
          imag_old = imag_new;
        } else {
          return index;
        }
      }
      return depth;
    };

    const render = () => {
      const left_real = parseFloat(x) - zoom / 2;
      const top_imag = parseFloat(y) + zoom / (2 * aspect_ratio);
      for (let current_real = 0; current_real < canv.width; current_real++) {
        for (let current_imag = 0; current_imag < canv.height; current_imag++) {
          const divergence_depth = get_divergence(
            left_real + current_real * zoom / canv.width,
            top_imag - current_imag * zoom / (aspect_ratio * canv.height),
            maxItr
          );
          ctx.fillStyle = get_color(divergence_depth);
          ctx.fillRect(current_real, current_imag, 1, 1);
        }
      }
    };

    canv.width = 640;
    canv.height = 480;
    render();
  }, [x, y, zoom, maxItr]);

  return (
    <div>
      <h1>Mandelbrot Viewer</h1>
      <canvas id="mc"></canvas>
    </div>
  );
};

export default MandelbrotViewer;
