function answer(){
  var inn = document.querySelectorAll("input");
  var val1 = parseInt(inn[0].value);
  var val2 = parseInt(inn[1].value);

  if(document.getElementById("cm").checked){
    val1 = val1 / 100;
  }
  if(document.getElementById("gm").checked){
    val2 = val2 / 1000;
  }
  val2 = Math.pow(val2,2);
  ans = val1 / val2;
  document.getElementById("my").innerHTML = "Your BMI index" + ans;
}
