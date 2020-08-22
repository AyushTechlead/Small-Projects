/*Creating a custom object*/
function FamilyMembers(a, b, c){   //First letter should be capital.
  this.a = a;
  this.b = b;
  this.c = c;
  this.add = function(){
    return this.a + this.b ;
   }
}

var ob1 = new FamilyMembers(2,3,4);
var ans = ob1.add();
