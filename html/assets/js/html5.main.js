var myHeading = document.querySelector('h1');
console.log(myHeading);
myHeading.textContent = 'Hello World';

var myImage = document.querySelector('img');
myImage.onclick = function() {
    var mySrc = myImage.getAttribute('src');
    if (mySrc === './assets/img/5p.png') {
        myImage.setAttribute('src', './assets/img/SuccessLabs.png');
    } else {
        myImage.setAttribute('src', './assets/img/5p.png');
    }
}
