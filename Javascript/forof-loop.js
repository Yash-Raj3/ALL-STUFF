// array is object in js
arr = [1,2,3,4,5];
// two loops forof and foreach
for (const ele of arr) {// it just can print number
    console.log(ele)
}// in normal for loop we can change the number at a specific index but in forof we can't
arr.forEach((ele,i,arr)=> {
    console.log(ele,i,arr);
    
});// it will also not change the index number 
