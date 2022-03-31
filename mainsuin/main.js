// var bac=document.querySelector('body').style.backgroundColor;
// var boxc=document.getElementsByClassName('suin')[0].style.backgroundColor;
// var texc=document.querySelector('body').style.color;
var bac='lightsteelblue';
var boxc='rgb(147, 168, 196)';
var texc='rgb(58, 57, 57)';

function darkmode(){
    var button = document.getElementById("button");

    if(button.innerHTML == "다크모드") {
        //다크모드 하기
        button.innerHTML = "라이트모드";
        document.querySelector('body').style.backgroundColor='rgb(34, 34, 34)';
        document.getElementsByClassName('suin')[0].style.backgroundColor='rgb(37, 40, 43)';
        document.querySelector('body').style.color="rgb(187, 200, 212)";
    } else {
        //라이트모드 하기
        button.innerHTML = "다크모드";
        document.querySelector('body').style.backgroundColor=bac;
        document.getElementsByClassName('suin')[0].style.backgroundColor=boxc;
        document.querySelector('body').style.color=texc;
    }
}
