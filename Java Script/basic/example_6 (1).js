let age = 2;
let isStudent = true;
let fare = 800;

if (age < 10) {
    console.log("Free Ticket");
}
else if (isStudent) {
    console.log("Fare =", fare * 0.5);
}
else if (age >= 60) {
    console.log("Fare =", fare * 0.85);
}
else {
    console.log("Fare =", fare);
}