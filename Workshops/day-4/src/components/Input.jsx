import React from "react";
import "../App.css";
// import "..";
import { classicNameResolver } from "typescript";

const Input = (props) => {
  return (
    <div className="input-container">
      <input
        type="text"
        value={props.taskInput}
        onChange={(e) => {
          props.handleTaskInput(e.target.value);
        }}
        placeholder="hello"
      />

      <button onClick={props.addTask}>Add</button>
    </div>
  );
};

export default Input;
