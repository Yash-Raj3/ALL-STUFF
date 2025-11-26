let newbtn = document.createElement("button");
newbtn.innerText = "Click It!";
console.log(newbtn);

let newh = document.createElement("h1");
newh.innerText = "<i>I am Heading</i>";
document.querySelector("body").prepend(newh);
let p = document.querySelector("p");
p.remove();
newbtn.style.color="Red";
newbtn.style.backgroundColor="Blue";
document.querySelector("body").prepend(newbtn);
let para = document.querySelector("p");
console.log(para);
para.classList.add("new");
