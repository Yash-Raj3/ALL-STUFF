// let btn1 = document.querySelector("#btn1");
// // btn1.onclick =(e) => {
// //     console.log(e);
// //     console.log(e.clientX, e.clientY);
    
// // }
// let box = document.querySelector("div");
// box.onmouseover= ()=>{
//     console.log("Yash clicked it!");
// }

// btn1.addEventListener("click",(e)=>{
//     console.log(e);
//     console.log(e.clientX)
//     console.log("Clicked!")
// })
// const handler1= btn1.addEventListener("click",()=>{
//     console.log("Oyee")
// })
// btn1.removeEventListener("click",handler1)
let btn = document.querySelector("#Mode");
let Currentmode = "light"
btn.addEventListener("click",()=>{
    
    if(Currentmode == "light"){
        Currentmode = "Dark"
        document.querySelector("body").style.backgroundColor = "Black";
    }else{
        Currentmode = "light";
        document.querySelector("body").style.backgroundColor = "white";
    }
    console.log(Currentmode);
})
