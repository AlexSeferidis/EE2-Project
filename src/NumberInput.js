import React from "react";
import "./App.css";

const NumberInput = ({ label, value, onChange }) => (
  <div className="Num-box">
    <label className="Num-box-label">
      {label}:&nbsp;&nbsp;
    </label>
    <input
      className="Num-box-input"
      type="number"
      value={value}
      onChange={onChange}
    />
  </div>
);

export default NumberInput;
