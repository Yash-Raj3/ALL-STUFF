let arr = [1,7,8,9,5,4,3];
let brr = arr.filter(ele => ele%2==0)
console.log(brr)
// also this method
function fiter(ele){
    if(ele%2==0)return true;
    return false;
}
brr = arr.filter(fiter);
console.log(brr)