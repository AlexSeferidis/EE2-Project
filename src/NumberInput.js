import React from "react";
import "./App.css";

const NumberInput = ({ label, value, onChange, min, max, step }) => {
  // Calculate the new value
  let new_value = value;
  if(step){
    new_value = value - (value % step);
  }
  

  return (
    <div className="Num-box">
      <label className="Num-box-label">
        {label}:&nbsp;&nbsp;
      </label>
      <input
        className="Num-box-input"
        type="number"
        value={new_value}
        onChange={onChange}
        min={min}
        max={max}
        step={step}
      />
    </div>
  );
};

export default NumberInput;
