const prompt=require("prompt-sync")();
let str=prompt("Enter a string: ");

str=str.replaceAll('x','y');
str=str.replaceAll('X','Y');

console.log(str);