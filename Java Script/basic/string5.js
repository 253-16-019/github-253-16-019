const prompt=require("prompt-sync")();
let str=prompt("Enter a string: ");

let word=str.split(" ");
for(let i=0;i<word.length;i++){
    word[i]=word[i][0].toUpperCase()+word[i].slice(1);
}

let result=word.join(" ");
console.log(result);