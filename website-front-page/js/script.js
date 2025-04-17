// Select the button and message elements
const backhandButton = document.getElementById('backhandButton');
const message = document.getElementById('message');

// Add a click event listener to the button
backhandButton.addEventListener('click', () => {
    // Update the message content
    message.textContent = 'You clicked the Backhand Button!';
});
