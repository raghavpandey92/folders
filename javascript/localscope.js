// let a = 10;
// const b = 60;
// var c = 56;
// console.log(a)
// console.log(b)
// console.log(c)
// if(true){
//     let a = 11
//     const b = 22
//     var c = 33
    // console.log("inner", a)
    // console.log(b)
    // console.log(c)
//}
// console.log(a)
// console.log(b)
// console.log(c)      // here is the problem 'var' print the value from outside the code//




function one(){
    const username = "adarsh"

    function two(){
        const website = "youutube"
        console.log(username)
    }
    // console.log(website)

    two()
}
// one()

if(true){
    const username = "adarsh"
    if(username == "adarsh"){
        const website = "yt"
        // console.log(username + website)
    }
    // console.log(website)
}
// console.log(username)


//=========================== interesting concept ===============================//

function adddone(num){         // this is generally a function //
    return num + 1
}
//adddone(5)

// addto(5)      // we can't access before intialization //
const addto = function(num){   // this is also a function but with variable
    return num + 2

}
//addto(5)



// =========== THIS AND ARROW FUNCTION ==============//

const user = {
    username: "adarsh",
    price: 999,

    welcomeMessage: function(){
        console.log(`${this.username} , welcome to website `)
        console.log(this)
    }
}
// user.welcomeMessage()
// user.username = "raghav"
// user.welcomeMessage()

// console.log(this)   // this show the empty 




//function chai(){ 
    //let username = "adarsh"
    //console.log(this.username)   // here output show the undefined //
//}
// chai()





// const chai = function(){ 
//     let username = "adarsh"
//     console.log(this.username)   // here output show the undefined //
// }
// chai()



// THIS IS ARROW FUNCTION SIMILAR TO FUNCTION //

const chai =  () => {       // THIS IS THE WAY HOW WE DECLARE ARROW FUNCTION
    let username = "adarsh"
    // console.log(this.username)   // here output show the undefined //
}
// chai()


// ANOTHER WAY OF DECLARING AN ARROW FUNCTION //

// const addtwo = (num1,num2) => {
    // return num1+num2
// }
//console.log(addtwo(4,5))


// ANOTHER WAY //

// const addtwoo = (num1,num2) =>  (num1+ num2) 
// console.log(addtwoo(5,8))



// IIFE function //

(function chai(){
    console.log(`db connected`)
})()












