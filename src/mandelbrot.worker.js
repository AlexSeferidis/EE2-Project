// src/mandelbrot.worker.js

self.addEventListener('message', (event) => {
    const { x, y, zoom, maxItr } = event.data;
    const canvasData = renderMandelbrot(x, y, zoom, maxItr);
    self.postMessage(canvasData, [canvasData.data.buffer]);
  });
  
  function renderMandelbrot(x, y, zoom, maxItr) {
    const canv = new OffscreenCanvas(640, 480);
    const ctx = canv.getContext('2d');
  
    const default_colours = [
        "#FF0000", "#FF0700", "#FF0E00", "#FF1500", "#FF1C00", "#FF2300", "#FF2A00", "#FF3100", "#FF3800", "#FF3F00",
        "#FF4600", "#FF4D00", "#FF5400", "#FF5B00", "#FF6200", "#FF6900", "#FF7000", "#FF7700", "#FF7E00", "#FF8500",
        "#FF8C00", "#FF9300", "#FF9A00", "#FFA100", "#FFA800", "#FFAF00", "#FFB600", "#FFBD00", "#FFC400", "#FFCB00",
        "#FFD200", "#FFD900", "#FFE000", "#FFE700", "#FFEE00", "#FFF500", "#FFFC00", "#F5FF00", "#ECFF00", "#E3FF00",
        "#DAFF00", "#D1FF00", "#C8FF00", "#BFFF00", "#B6FF00", "#ADFF00", "#A4FF00", "#9BFF00", "#92FF00", "#89FF00",
        "#80FF00", "#77FF00", "#6EFF00", "#65FF00", "#5CFF00", "#53FF00", "#4AFF00", "#41FF00", "#38FF00", "#2FFF00",
        "#26FF00", "#1DFF00", "#14FF00", "#0BFF00", "#00FF05", "#00FF0E", "#00FF17", "#00FF20", "#00FF29", "#00FF32",
        "#00FF3B", "#00FF44", "#00FF4D", "#00FF56", "#00FF5F", "#00FF68", "#00FF71", "#00FF7A", "#00FF83", "#00FF8C",
        "#00FF95", "#00FF9E", "#00FFA7", "#00FFB0", "#00FFB9", "#00FFC2", "#00FFCB", "#00FFD4", "#00FFDD", "#00FFE6",
        "#00FFEF", "#00FFF8", "#00FFFF", "#00F6FF", "#00EDFF", "#00E4FF", "#00DBFF", "#00D2FF", "#00C9FF", "#00C0FF",
        "#00B7FF", "#00AEFF", "#00A5FF", "#009CFF", "#0093FF", "#008AFF", "#0081FF", "#0078FF", "#006FFF", "#0066FF",
        "#005DFF", "#0054FF", "#004BFF", "#0042FF", "#0039FF", "#0030FF", "#0027FF", "#001EFF", "#0015FF", "#000CFF",
        "#0003FF", "#0400FF", "#0D00FF", "#1600FF", "#1F00FF", "#2800FF", "#3100FF", "#3A00FF", "#4300FF", "#4C00FF",
        "#5500FF", "#5E00FF", "#6700FF", "#7000FF", "#7900FF", "#8200FF", "#8B00FF", "#9400FF", "#9D00FF", "#A600FF",
        "#AF00FF", "#B800FF", "#C100FF", "#CA00FF", "#D300FF", "#DC00FF", "#E500FF", "#EE00FF", "#F700FF", "#FF00FB",
        "#FF00F2", "#FF00E9", "#FF00E0", "#FF00D7", "#FF00CE", "#FF00C5", "#FF00BC", "#FF00B3", "#FF00AA", "#FF00A1",
        "#FF0098", "#FF008F", "#FF0086", "#FF007D", "#FF0074", "#FF006B", "#FF0062", "#FF0059", "#FF0050", "#FF0047",
        "#FF003E", "#FF0035", "#FF002C", "#FF0023", "#FF001A", "#FF0011", "#FF0008", "#FF0000", "#FF0000", "#FF0000",
        "#FF0700", "#FF0E00", "#FF1500", "#FF1C00", "#FF2300", "#FF2A00", "#FF3100", "#FF3800", "#FF3F00", "#FF4600",
        "#FF4D00", "#FF5400", "#FF5B00", "#FF6200", "#FF6900", "#FF7000", "#FF7700", "#FF7E00", "#FF8500", "#FF8C00",
        "#FF9300", "#FF9A00", "#FFA100", "#FFA800", "#FFAF00", "#FFB600", "#FFBD00", "#FFC400", "#FFCB00", "#FFD200",
        "#FFD900", "#FFE000", "#FFE700", "#FFEE00", "#FFF500", "#FFFC00", "#F5FF00", "#ECFF00", "#E3FF00", "#DAFF00",
        "#D1FF00", "#C8FF00", "#BFFF00", "#B6FF00", "#ADFF00", "#A4FF00", "#9BFF00", "#92FF00", "#89FF00", "#80FF00",
        "#77FF00", "#6EFF00", "#65FF00", "#5CFF00", "#53FF00", "#4AFF00", "#41FF00", "#38FF00", "#2FFF00", "#26FF00",
        "#1DFF00", "#14FF00", "#0BFF00", "#00FF05", "#00FF0E", "#00FF17", "#00FF20", "#00FF29", "#00FF32", "#00FF3B",
        "#00FF44", "#00FF4D", "#00FF56", "#00FF5F", "#00FF68", "#00FF71", "#00FF7A", "#00FF83", "#00FF8C", "#00FF95",
        "#00FF9E", "#00FFA7", "#00FFB0", "#00FFB9", "#00FFC2", "#00FFCB", "#00FFD4", "#00FFDD", "#00FFE6", "#00FFEF",
        "#00FFF8", "#00FFFF", "#00F6FF", "#00EDFF", "#00E4FF", "#00DBFF", "#00D2FF", "#00C9FF", "#00C0FF", "#00B7FF",
        "#00AEFF", "#00A5FF", "#009CFF", "#0093FF", "#008AFF", "#0081FF", "#0078FF", "#006FFF", "#0066FF", "#005DFF",
        "#0054FF", "#004BFF", "#0042FF", "#0039FF", "#0030FF", "#0027FF", "#001EFF", "#0015FF", "#000CFF", "#0003FF",
        "#0400FF", "#0D00FF", "#1600FF", "#1F00FF", "#2800FF", "#3100FF", "#3A00FF", "#4300FF", "#4C00FF", "#5500FF",
        "#5E00FF", "#6700FF", "#7000FF", "#7900FF", "#8200FF", "#8B00FF", "#9400FF", "#9D00FF", "#A600FF", "#AF00FF",
        "#B800FF", "#C100FF", "#CA00FF", "#D300FF", "#DC00FF", "#E500FF", "#EE00FF", "#F700FF", "#FF00FB", "#FF00F2",
        "#FF00E9", "#FF00E0", "#FF00D7", "#FF00CE", "#FF00C5", "#FF00BC", "#FF00B3", "#FF00AA", "#FF00A1", "#FF0098",
        "#FF008F", "#FF0086", "#FF007D", "#FF0074", "#FF006B", "#FF0062", "#FF0059", "#FF0050", "#FF0047", "#FF003E",
        "#FF0035", "#FF002C", "#FF0023", "#FF001A", "#FF0011", "#FF0008", "#000000"
    ];

    const aspect_ratio = canv.width / canv.height;
    const depth_step = maxItr / default_colours.length;
    const real_zoom = 4.0 / (2 ** zoom);
  
    const convergence = (real, imag) => Math.sqrt(real ** 2 + imag ** 2) < 2;
  
    const get_colour = (depth) => {
      for (let index = 0; index < default_colours.length; index++) {
        if (depth < depth_step * index) {
          return default_colours[index];
        }
      }
      return default_colours[default_colours.length - 1];
    };
  
    const check_divergence = (real, imag, depth) => {
      let real_old = real;
      let imag_old = imag;
      for (let index = 0; index < depth; index++) {
        if (convergence(real_old, imag_old)) {
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
      const left_real = parseFloat(x) - real_zoom / 2;
      const top_imag = parseFloat(y) + real_zoom / (2 * aspect_ratio);
      for (let current_real = 0; current_real < canv.width; current_real++) {
        for (let current_imag = 0; current_imag < canv.height; current_imag++) {
          const divergence_depth = check_divergence(
            left_real + current_real * real_zoom / canv.width,
            top_imag - current_imag * real_zoom / (aspect_ratio * canv.height),
            maxItr
          );
          ctx.fillStyle = get_colour(divergence_depth);
          ctx.fillRect(current_real, current_imag, 1, 1);
        }
      }
    };
    
    render();
  
    return ctx.getImageData(0, 0, canv.width, canv.height);
  }