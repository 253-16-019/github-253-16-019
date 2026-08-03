
//let surutei define korte hoy.. kintu var jekhene khusi sekhay kora jay

// x=4;
// var x;
// this is right--

// x=4;
// let x;
// this is wrong;
// it should be- hoisted
// let x;
// x=4;

// const PI=3.141592659;
// PI=3.14; //this is wrong;

const PI=3.141592659; // this is right;

// but 
// const PI;
// PI=3.141592659;
// this is wrong declarable;

//const For- array, object, function, regexp ;;

let x= 5+2+"5";
console.log(x);

let y= "5"+5+2;
console.log(y);

let z="rashed"+" "+"vai";
console.log(z);


var n=10;
var n=2;// var can be redeclared;
console.log(n);

// let m=10;
// let m=2;
// It is wrong ,,it is not be redeclared;

// let k=2;
// var k=3;
// etao wrong;

var n=10;
{
var n=2; //etay notun update hobe,,block kaj korbe na..
} 
//beacause var is Global scope
console.log(n);

let m=50;
{
let m=100; // eta sudhu ei block er moddei kaj korbe! print korate caile block er vitore console dite hobe! 
console.log(m);
}
// let is block scope;
console.log(m);


// const & let er properties same;
// var alada