let weight = 70;
let height = 1.75;

let bmi = weight / (height * height);

console.log("BMI =", bmi);

if (bmi < 18.5) {
    console.log("Underweight");
}
else if (bmi >= 18.5 && bmi <= 24.9) {
    console.log("Normal");
}
else if (bmi >= 25 && bmi <= 29.9) {
    console.log("Overweight");
}
else {
    console.log("Obese");
}