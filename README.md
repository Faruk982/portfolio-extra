a version typecursor
// Function to simulate typing animation for multiple strings
function typeWriter(strings, i, spanElement) {
    const currentString = strings[i];
    let j = 0;

    function typeCharacter() {
        if (j < currentString.length) {
            spanElement.textContent += currentString.charAt(j);
            j++;
            setTimeout(typeCharacter, 100); // Adjust typing speed here (in milliseconds)
        } else {
            // Clear the typed content after typing completes
            setTimeout(function() {
                spanElement.textContent = '';
                i = (i + 1) % strings.length; // Loop through strings array
                typeWriter(strings, i, spanElement);
            }, 1000); // Delay before typing the next string (in milliseconds)
        }
    }

    typeCharacter();
}

document.addEventListener('DOMContentLoaded', function() {
    const typedNameElement = document.getElementById('typed-name');
    const strings = [" A programmer ", "A Developer ", " Other Facts"]; // Replace with your information
    typeWriter(strings, 0, typedNameElement);
});
