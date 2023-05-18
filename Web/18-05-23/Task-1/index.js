class Rectangle {
    constructor(width, height) {
      this.width = width;
      this.height = height;
    }
  
    // Getter methods
    get getWidth() {
      return this.width;
    }
  
    get getHeight() {
      return this.height;
    }
  
    // Setter methods
    set setWidth(width) {
      if (width > 0) {
        this.width = width;
      } else {
        console.log('Width must be greater then 0.');
      }
    }
  
    set setHeight(height) {
      if (height > 0) {
        this.height = height;
      } else {
        console.log('Height must be graeter then 0.');
      }
    }
  
    // Other methods
    getArea() {
      return this.width * this.height;
    }
  
    getPerimeter() {
      return 2 * (this.width + this.height);
    }
  }
  
// Create an example of Rectangle
const rectangle = new Rectangle(5, 10);
  
// Get the Area and Perimeter
console.log('Area:', rectangle.getArea()); // Output: 50
console.log('Perimeter:', rectangle.getPerimeter()); // Output: 30
  
// Update the data
rectangle.setWidth = 8;
rectangle.setHeight = 15;
console.log('Updated Area:', rectangle.getArea()); // Output: 120
console.log('Updated Perimeter:', rectangle.getPerimeter()); // Output: 46
  
// Set invalid values
rectangle.setWidth = -2; // Invalid width value. Width must be a positive number.
rectangle.setHeight = 0; // Invalid height value. Height must be a positive number.
  