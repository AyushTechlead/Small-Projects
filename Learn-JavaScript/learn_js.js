alert("Hey! There i'm using JavaScript");
var a = prompt("Enter your name");
console.log("Your anme is "+ a);

 var age = prompt("Enter Your Age");
alert("You have entered " + message.length + " words and remaining words are " + (240 - message.length));

message = message.slice(0,10);
message = message.toUpperCase();
message = message.toLowerCase();

 var Capname = Name[0].toUpperCase() + Name.slice(1,Name.length);
 alert(Capname);

function print_Name(times){
    console.log(Name+"\n");
    alert(times);
}
print_Name(23);

var age = prompt("Enter the age");
var lim = prompt("Enter the age of death");
function month_left(age, lim){
    var left = lim - age;
    console.log("months left" + left/12 + "\n");
}
month_left(age,lim);

/*Generate random number from 1-6*/
var rand = Math.random()
console.log(Math.round(rand*5 + 1));
console.log(typeof("ayush"));
var a = 1;
var b = '1';
if(a == b){    // check same data type
    console.log("YES");
}
else{
    console.log("NO");
}
var arr = ["apple","mango","banana","grapes"];
if(arr.includes("mango")){
    console.log("YES");
}
else{
    console.log("NO");
}

arr.push("Orange");   //return number of items.

var i = 0;
while(i < 100){
    console.log(i++);
}


for(var i = 0; i < 10; i++){
    console.log(i);
}


/*Create a object*/
var derrivedBox = {
    name : "Ayush Kapri",
    roll : 6
}

for(var i = 0; i < document.querySelectorAll(".drum").length; i++){
  document.querySelectorAll(".drum")[i].addEventListener("click",ClickHandler);
}

function ClickHandler(){
  var track = "sounds/" + this.innerHTML.toLowerCase() + ".mp3";
  var audio = new Audio(track);
  audio.play();
  console.log(audio);
}
