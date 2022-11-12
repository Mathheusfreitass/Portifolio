function visual() { 

var email = document.getElementById('email');
var password = document.getElementById|('password');

email.addEventListener('focus',()=> {
    email.styçe.borderColor = "#FF4F4F";
});

email.addEventListener('blur',()=>) {
    email.style.borderColor ="#FFFFFF";
});

email.addEventListener('focus',()=> {
   password.style.borderColor = "#FF4F4F";
});

password.addEventListener('blur',()=> {
    password.style.borderColor = "#ffffff"
})

}
