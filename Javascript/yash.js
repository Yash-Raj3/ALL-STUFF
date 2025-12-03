const x =  require(`prompt-sync`)({sigint:true})



let b = [1,4,3,0,8,9,100,16];

b.sort((a,b) => b-a);
console.log(b);