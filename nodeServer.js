const express = require('express');
const fs = require('fs');
const app = express();

// Log request
app.get('/', (req, res) => {
    // Log the current time with microsecond precision
    const currentTime = new Date().toISOString() + "\n";
    
    // Append the current time to the log file
    fs.appendFile('request_log.txt', currentTime, (err) => {
        if (err) throw err;
    });
    
    // Output response (optional)
    res.send(`Request received at: ${currentTime}`);
});

// Start the server
app.listen(3000, () => {
    console.log('Server is running on port 3000');
});
