import React, { useState, useEffect } from 'react';
import './App.css';
import NumberInput from './NumberInput.js';
import GetPost from './GetPost.jsx';
import MandelbrotViewer from './MandelbrotViewer.jsx';

const App = () => {
  const [x, setX] = useState('-0.7');
  const [y, setY] = useState('0');
  const [zoom, setZoom] = useState('3');
  const [maxItr, setMaxItr] = useState('50');

  const updateParameters = (newParams) => {
    setX(newParams.x_offset);
    setY(newParams.y_offset);
    setZoom(newParams.zoom);
    setMaxItr(newParams.max_iterations);
  };

  // const handleKeyDown = (e) => {
  //   switch (e.key) {
  //     case 'ArrowLeft':
  //       setX((parseFloat(x) - 0.1).toString());
  //       break;
  //     case 'ArrowRight':
  //       setX((parseFloat(x) + 0.1).toString());
  //       break;
  //     case 'ArrowUp':
  //       setY((parseFloat(y) + 0.1).toString());
  //       break;
  //     case 'ArrowDown':
  //       setY((parseFloat(y) - 0.1).toString());
  //       break;
  //     default:
  //       break;
  //   }
  // };

  // useEffect(() => {
  //   document.addEventListener('keydown', handleKeyDown);
  //   return () => {
  //     document.removeEventListener('keydown', handleKeyDown);
  //   };
  // }, []);

  return (
    <div className="App">
      <header className="App-header">
        <h1>Usual Suspects Parameter Entry</h1>
      </header>
      <main className="Param-area">
      <div className="Param-inputs">
          <h1>Parameters</h1>
          <NumberInput
            label="x-Offset"
            value={x}
            onChange={e => setX(e.target.value)}
            min={-3}
            max={3}
            step={0.1}
          />
          <NumberInput
            label="y-Offset"
            value={y}
            onChange={e => setY(e.target.value)}
            min={-2}
            max={2}
            step={0.1}
          />
          <NumberInput
            label="Zoom"
            value={zoom}
            onChange={e => setZoom(e.target.value)}
            min={0}
            max={7}
            step={1}
          />
          <NumberInput
            label="Maximum Iterations"
            value={maxItr}
            onChange={e => setMaxItr(e.target.value)}
            min={10}
            max={256}
            step={1}
          />
          <div>
            <GetPost x={x} y={y} zoom={zoom} maxItr={maxItr} updateParameters={updateParameters} />
          </div>
        </div>
        <div className="verticalLine">
          
        </div>
        <div className="MandelbrotViewport">
          <MandelbrotViewer x={x} y={y} zoom={zoom} maxItr={maxItr} />
        </div>
      </main>
    </div>
  );
};

export default App;