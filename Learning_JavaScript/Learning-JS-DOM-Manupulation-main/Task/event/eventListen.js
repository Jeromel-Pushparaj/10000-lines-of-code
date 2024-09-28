// let btn = Document.querySelector("#btn");

let changeBodyColor = (color) => {
  document.body.style.backgroundColor = color;
}

btn.addEventListener("click", function (e) {
    console.log(e.target);
    e.target.style.background = "blue";
    changeBodyColor("yellow");
  });
  

  