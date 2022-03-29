function darkmode(){
    var body = document.body;
    // body.classList.toggle("dark-mode");
    document.querySelector('body').style.backgroundColor='rgb(34, 34, 34)'
    document.getElementsByClassName('suin')[0].style.backgroundColor='rgb(37, 40, 43)';
    document.querySelector('body').style.color="rgb(187, 200, 212)";
    
    var button = document.getElementById("button");

    if(button.innerHTML == "다크모드") {
        button.innerHTML = "라이트모드";
    } else {
        button.innerHTML = "다크모드";
        document.querySelector('body').style.backgroundColor='lightsteelblue';
        document.getElementsByClassName('suin')[0].style.backgroundColor='rgb(147, 168, 196)';
        document.querySelector('body').style.color="black";
    }
}
