$(document).keypress(function(event){
  $($("h1")[0]).html(event.key);
  $("h1").first().html(event.key);
  $($("h1").get(1)).html("PRo-grammer");

});

$(document).on("click", function(){
  $($("h1")[0]).html(event.key);
  $("h1").first().html(event.key);
  $($("h1").get(1)).html("PRo-grammer");
});
