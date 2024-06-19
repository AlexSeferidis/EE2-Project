import React from "react";
import "./App.css";

const NumberInput = ({ label, value, onChange, min = 0, max = 8, step = 1 }) => (
  <div className="Num-box">
    <label className="Num-box-label">
      {label}:&nbsp;&nbsp;
    </label>
    <input
      className="Num-box-input"
      type="number"
      value={value}
      onChange={onChange}
      min={min}
      max={max}
      step={step}
    />
  </div>
);

export default NumberInput;