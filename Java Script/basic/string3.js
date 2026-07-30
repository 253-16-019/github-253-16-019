const prompt=require("prompt-sync")();
let str=prompt("Enter a string: ");
if(str.includes('a') && str.includes('e')&&str.includes('i')&&str.includes('o')&&str.includes('u')){
    console.log("All vawels here");
}
else{
    console.log("Doesn't contail all vowels");
}