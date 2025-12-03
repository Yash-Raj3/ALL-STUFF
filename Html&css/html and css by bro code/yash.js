const prompt =  require(`prompt-sync`)({sigint:true})


const input =  prompt("Enter Number: ");
const x =  parseInt(input,10);
let n1 =0;
let n2 =1;
let fab  =[n1,n2];
for(let i=1;i<=x;i++){
    let next = n1+n2;
   fab.push(next);
    n1 = n2;
    n2 =  next;
    
}
console.log(fab.join(" "));