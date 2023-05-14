let table = [[' ',' ',' '],[' ',' ',' '],[' ',' ',' ']];
prompt("We are getting started.Open the console to see the result.")

// Get the Turn.
function getTurn(){
    let turn = prompt("Please let me know who starts 'x' or 'o'." )
    if(turn == 'x' || turn == 'o'){
        return turn;
    } 
    return getTurn();
}

// Print the table.
function printTable(table){
    for(let i = 0; i < table.length; i++) {
        console.log('_______');
        console.log(`|${table[i].join('|')}|`);
    }
    console.log('_______');
}


// Push an element.
function pushElem(table,turn,x,y){
    if((x > 2) || (y > 2) || (x < 0) || (y < 0)){
        console.log("Enter the place again, it was incorrect.");
        return 0;
    }
    if(table[x][y] != ' '){
        console.log('Input again, the place is already taken.')
        return 0;
    }
    table[x][y] = turn;
}


// Check if there is winner or not
function checkWin(table, turn){
    for(let i = 0; i < table.length; i++){
        if((table[i][0] == table[i][1]) && (table[i][1] == table[i][2]) && (table[i][1] != ' ')){
            console.log(turn + ' Won');
            return 0;
        }
        if((table[0][i] == table[1][i]) && (table[1][i] == table[2][i]) && (table[2][i] != ' ')){
            console.log(turn + ' Won');
            return 0;
        }
    }

    if((table[0][0] == table[1][1]) && (table[1][1] == table[2][2]) && (table[0][0] != ' ')){
        console.log(turn + ' Won');
        return 0;
    }

    if((table[0][2] == table[1][1]) && (table[1][1] == table[2][0]) && (table[0][2] != ' ')){
        console.log(turn + ' Won');
        return 0;
    }

    if (![table[0].join(''), table[1].join(''), table[2].join('')].join('').includes(' ')){
        console.log('Draw');
        return 0;
    }
}


// Change the turn
function changeTurn(turn){
    if(turn == 'x'){
        return 'o';
    }
    return 'x';
}

// Let's start the game.
function game(table){
    let coords = [];
    let turn = getTurn();
    let push, check;
    console.log(`The game is getting started by ${turn}`)
    for(let i = 0; i < 9; i++){
        console.log(`It's ${turn}'s turn.`)
        coords = prompt("Enter the place in form x,y ").split(',');
        push = pushElem(table, turn, coords[0], coords[1]);
        if(push == 0){
            i -= 1;
            continue;
        }
        check = checkWin(table, turn);
        if(check == 0){
            printTable(table);
            return;
        }
        printTable(table);
        turn = changeTurn(turn);
    }
}

game(table);