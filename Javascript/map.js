let arr = [1,3,5,6,7];
// let brr = [];
// for (const ele of arr) {
//     brr.push(ele*ele)
// }
// console.log(brr);
// It can either be done by map function
// function square(ele){
//     return ele*ele;
// }
// function  double(ele){
//     return ele*2;
// }
// function add10(ele){
//     return ele+10;
// }
// let brr = arr.map(double)   
// console.log(brr)
// shortcut
let brr = arr.map(ele => ele*2);
console.log(brr)
brr = arr.map(ele => ele+10);
console.log(brr)
 brr = arr.map(ele => ele*ele);
console.log(brr)