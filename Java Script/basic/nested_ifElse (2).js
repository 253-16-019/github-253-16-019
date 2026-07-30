let myScore = 85;
let friendScore = 65;

if (myScore > 80) {
    if (friendScore > 80) {
        console.log("Go for a lunch");
    }
    else if (friendScore >= 60) {
        console.log("Good luck next time");
    }
    else if (friendScore >= 40) {
        console.log("Keep friend's message unseen");
    }
    else {
        console.log("Block your friend");
    }
}
else {
    console.log("Go home, sleep and act sad");
}