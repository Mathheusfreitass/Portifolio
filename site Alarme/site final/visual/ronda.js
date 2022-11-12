
function slide1(){
document.getElementById('fotos').src="https://www.imagemhost.com.br/images/2021/08/20/cerca.jpg";
setTimeout("slide2()", 1000)
}

function slide2(){
document.getElementById('fotos').src="https://www.imagemhost.com.br/images/2021/08/20/mobile.jpg";
setTimeout("slide3()", 1000)
}

function slide3(){
document.getElementById('fotos').src="https://www.imagemhost.com.br/images/2021/08/20/portao.jpg";
setTimeout("slide4()", 1000)
}

function slide4(){
document.getElementById('fotos').src="https://www.imagemhost.com.br/images/2021/08/20/cameramobile.jpg";
setTimeout("slide1()", 1000)
}


