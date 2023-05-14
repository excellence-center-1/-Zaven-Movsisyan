function getCapitaized(letters){
    let res = [];
    let prev;
    for(let i = 0; i < letters.length; i++){
        prev = letters[i].toUpperCase();
        res.push(prev);
    }
    return res;
}

console.log(getCapitaized(['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p']))