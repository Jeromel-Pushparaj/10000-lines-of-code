import React, { useState } from "react";
import "./styles.css";
import Input from "./components/Input";
import ListItem from "./components/ListItem";

const task = {
  text: "write something",
  completed: false,
};

export default function App() {
  const [taskInput, setTaskInput] = useState("");
  const [task, setTask] = useState([]);

  const handleTaskInput = (str) => {
    setTaskInput(str);
  };

  const addTask = () => {
    if (taskInput !== "") {
      setTask([...task, { text: taskInput, completed: false }]);
      setTaskInput("");
    }
  };

  const handleDeleteTask = (index) => {
    var updatedTask = task.filter((_, i) => {
      if (index === i) {
        return false;
      } else {
        return true;
      }
    });
    setTask(updatedTask);
  };

  const handleStrikthrough = (index) => {
    var updatedTask = task.map((ele, i) => {
      if (index === i) {
        const updatedElement = {
          ...ele,
          completed: ele.completed ? false : true,
        };
        return updatedElement;
      } else {
        return ele;
      }
    });
    setTask(updatedTask);
  };
  return (
    <div className="App">
      <h1>ToDo Web App</h1>
      <Input
        taskInput={taskInput}
        addTask={addTask}
        handleTaskInput={handleTaskInput}
      />
      <ListItem
        task={task}
        handleDeleteTask={handleDeleteTask}
        handleStrikthrough={handleStrikthrough}
      />
    </div>
  );
}
