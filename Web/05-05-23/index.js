let name = prompt("What is your name?");
let age_str = prompt("What is your age?");


let age = parseInt(age_str);
if (isNaN(age) || age < 0) {
    console.log("The data given by u was inappropriate.");
} else {
    let stage;
    switch (true) {
    case (age <= 12):
        stage = "childhood";
        break;
    case (age <= 19):
        stage = "teenage years";
        break;
    case (age <= 29):
        stage = "young adult";
        break;
    case (age <= 59):
        stage = "adult";
        break;
    default:
        stage = "senior";
    }
    console.log(`Welcome, ${name}! You are in ${stage}.`);
  }