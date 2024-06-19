// src/MandelbrotViewer.js
import React, { useEffect, useRef } from 'react';
import Worker from './mandelbrot.worker.js';

const MandelbrotViewer = ({ x, y, zoom, maxItr, key }) => {
  const canvasRef = useRef(null);
  const workerRef = useRef(null);

  useEffect(() => {
    const worker = new Worker(new URL('./mandelbrot.worker.js', import.meta.url));
    workerRef.current = worker;

    const canv = canvasRef.current;
    const ctx = canv.getContext('2d');
    ctx.imageSmoothingEnabled = false;
    ctx.globalCompositeOperation = 'source-over'; // Ensure this is set to source-over

    const handleMessage = (event) => {
      const imageData = event.data;
      ctx.putImageData(imageData, 0, 0);
    };

    worker.addEventListener('message', handleMessage);

    return () => {
      worker.removeEventListener('message', handleMessage);
      worker.terminate();
    };
  }, []);

  useEffect(() => {
    const worker = workerRef.current;
    if (worker) {
      worker.postMessage({ x, y, zoom, maxItr });
    }
  }, [x, y, zoom, maxItr, key]);

  return (
    <div>
      <h1>Mandelbrot Viewer</h1>
      <canvas ref={canvasRef} width={640} height={480}></canvas>
    </div>
  );
};

export default MandelbrotViewer;
