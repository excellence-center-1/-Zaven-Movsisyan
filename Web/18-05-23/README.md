Web
----
Js
----
| 18-05-23 | Task 9 | Solve the given tasks of OOP |
---
Task-1 :
-----


// Create an instance of Rectangle
const rectangle = new Rectangle(5, 10);
// Display the area and perimeter
console.log('Area:', rectangle.getArea()); // Output: 50
console.log('Perimeter:', rectangle.getPerimeter()); // Output: 30
// Update the width and height using the setter methods
rectangle.width = 8;
rectangle.height = 15;
// Display the updated area and perimeter
console.log('Updated Area:', rectangle.getArea()); // Output: 120
console.log('Updated Perimeter:', rectangle.getPerimeter()); // Output: 46
// Try setting invalid values
rectangle.width = -2; // Invalid width value. Width must be a positive number.
rectangle.height = 0; // Invalid height value. Height must be a positive number.
Improve the Two-player Tic Tac Toe game.
----
Task-2 :
-----


Create a class called MathUtils that contains static methods for performing various mathematical operations. The class should include the following static methods:
MathUtils.sum(numbers): Accepts an array of numbers and returns the sum of all the numbers.
MathUtils.average(numbers): Accepts an array of numbers and returns the average (mean) of the numbers.
MathUtils.max(numbers): Accepts an array of numbers and returns the maximum number in the array.
MathUtils.min(numbers): Accepts an array of numbers and returns the minimum number in the array.
-------------------------------------------
// Example usage
const numbers = [5, 2, 9, 1, 7];
MathUtils.sum(numbers) //Sum: 24
MathUtils.average(numbers) // Average: 4.8
MathUtils.max(numbers) // Max: 9
MathUtils.min(numbers) // Min: 1