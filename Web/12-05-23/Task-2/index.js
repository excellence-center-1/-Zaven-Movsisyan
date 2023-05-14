let text = prompt("Enter the text");


function reverseWord(word){
    let size = word.length;
    let wordLetters = word.split('');
    let reversedLetters = [];

    for(let i = 0; i < size; i++){
        reversedLetters[i] = wordLetters[size - i - 1];
    }

    return reversedLetters.join('');
}

alert("The reversed text : " + reverseWord(text));