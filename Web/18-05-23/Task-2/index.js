class MathUtils {
    static sum(numbers) {
        return numbers.reduce((a, b) => {
            return a + b;
        });
    }
  
    static average(numbers) {
      return MathUtils.sum(numbers) / numbers.length;
    }
  
    static max(numbers) {
      return Math.max(...numbers);
    }
  
    static min(numbers) {
      return Math.min(...numbers);
    }
}
  

const numbers = [5, 2, 9, 1, 7];
console.log("Sum:", MathUtils.sum(numbers));
console.log("Average:", MathUtils.average(numbers));
console.log("Max:", MathUtils.max(numbers));
console.log("Min:", MathUtils.min(numbers));