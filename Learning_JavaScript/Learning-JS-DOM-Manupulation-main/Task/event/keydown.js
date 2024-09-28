// Event listener for the keydown event
document.addEventListener("keydown", function(event) {
    // Log the key code of the pressed key
    console.log("Key pressed:", event.keyCode);

    // Example: Change background color when the 'Enter' key (key code 13) is pressed
    if (event.keyCode === 13) {
        document.body.style.backgroundColor = "blue";
    }
});

// Event listener for the keyup event
document.addEventListener("keyup", function(event) {
    // Log the key code of the released key
    console.log("Key released:", event.keyCode);

    // Example: Change background color when the 'Enter' key (key code 13) is released
    if (event.keyCode === 32) {
        document.body.style.backgroundColor = "green";
    }
});
