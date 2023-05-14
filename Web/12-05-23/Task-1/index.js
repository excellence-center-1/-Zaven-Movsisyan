let data = prompt("Enter numbers seperated by spaces. (' ')");
let numbers = data.split(' ');

function sumOfEvens(numbers) {
    let sum = 0;
    for (let i = 0; i < numbers.length; i++){   
        let prev = parseInt(numbers[i]);
        if(isNaN(prev)){
            alert("Your input was incorrect.");
            return;
        } else{
            if (prev % 2 == 0) {
                sum += prev;
            }
        }
    }
    alert('The sum of even numbers : ' + sum);
    return sum;
  }

sumOfEvens(numbers);
