const form = document.getElementById('numbers');
console.log("Hello World");
form.addEventListener('submit', function(event) {
  
  event.preventDefault();
 var n1 = form.elements.input1.value;
 var n2 = form.elements.input2.value;
  // var action = form.elements.action.value; 
  var action = document.activeElement;
  if (action.value == "Multiply"){
    console.log("M");
    document.getElementById('ans').innerHTML=n1*n2;
  }
  else if(action.value == "Divide" && n2 != 0){
    console.log("d");
    document.getElementById('ans').innerHTML=n1/n2;
  }
  else{
    document.getElementById('ans').innerHTML="Input Number 2 is Zero it is Invalid";
    alert("Invalid input!");
  }
  
})
