function B(a, b, c) {
this.a= a;
this.x = b;
this.z = c;
this.disp = function(p) {
console.log("A: "+p.a); 
console.log("X: " + p.x); 
console.log("Z: " + p.z); 
}
}
function fun(x, y){
  
for (i in x) { 
  if (!(i in y))
  delete x[i];
} for (i in y) {
  if (!(i in x))
  x[i] = y[i];
}
return x;
}
function main() {
const a = new A(1, 2, 3);
const b = new B(4, 5, 6);
const ob = new fun(a, b)
ob._x = 9;
for (i in ob) {
console.log(i+ ":" + ob[i]);
}
}