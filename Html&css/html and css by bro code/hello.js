    // First, install it: npm install prompt-sync
    const prompt = require('prompt-sync')({ sigint: true });

const n = prompt("Enter a Number: ");
let fact =1;
for(let i =1;i<=n;i++){

fact *= i;

}
console.log(`Factorial of ${n} is ${fact}`);