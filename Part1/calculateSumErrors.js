// calculateSumErrors.js
// Errors: bad parenthesis, misspelled call, missing brace

function calculateSum(arr {           
    let total = 0;
    for (let num of arr) {
      total += num;
    }
    return total;
    // missing closing brace
  }
  
  let result = calcualteSum([1, 2, 3, 4, 5]);  // ReferenceError
  console.log("Sum:", result);
  