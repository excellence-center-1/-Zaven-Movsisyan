// Task 1
const data = [
    {title: "To Kill a Mockingbird", author: "Harper Lee", pages: 336},
    {title: "The Great Gatsby", author: "F. Scott Fitzgerald", pages: 180},
    {title: "1984", author: "George Orwell", pages: 328},
    {title: "The Catcher in the Rye", author: "J.D. Salinger", pages: 224},
    {title: "Brave New World", author: "Aldous Huxley", pages: 288}
];


// Task 2
for(let i = 0;i < data.length; i++){
    console.log(data[i].title);
} 


// Task 3
let count = 0;

for(let i = 0; i < data.length; i++){
    count += data[i].pages;
}

console.log(`Total number of pages: ${count}`);


// Task 4
let max = data[0].pages;
let index = 0;

for(let i = 1; i < data.length; i++){
    if(max < data[i].pages){
        index = i;
        max = data[i].pages;
    }
}

console.log(`The book with the most pages is, '${data[index].title}' with ${data[index].pages} pages.`);


// Task 5
let shortest_title = data[0].title;

for(let i = 1; i < data.length; i++){
    if(shortest_title.length > data[i].title.length){
        shortest_title = data[i].title;
    }
}

console.log(`The book with the shortest title is '${shortest_title}'.`);


// Task 6
let authors = [];

for(let i = 0; i < data.length; i++){
    authors.push(data[i].author);
}

console.log(authors);


// Task 7
let arr1 = [];

for(let i = 0; i < data.length; i++){
    arr1.push({name: data[i].author, books: [data[i].title]});
}

console.log(arr1);