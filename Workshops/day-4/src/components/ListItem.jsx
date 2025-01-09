import React from "react";
import "../App.css";
const ListItem = (props) => {
  return (
    <ul className="task-list">
      {props.task.map((ele, i) => {
        return (
          <li>
            <span
              className={ele.completed ? "strikeTask" : ""}
              onClick={() => props.handleStrikthrough(i)}
            >
              {ele.text}
            </span>
            <button onClick={() => props.handleDeleteTask(i)}>Delete</button>
          </li>
        );
      })}
    </ul>
  );
};

export default ListItem;
