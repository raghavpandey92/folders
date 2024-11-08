// NULL is object , but 'undefined' is type


// PRIMITIVE DATATYPE
// 1. number = 2 to power 53
// 2. bigint
// 3. string
// 4. boolean = true/false
// 5. null = standalone value
// 6. undefined
// 7. symboll = unique


"use strict"; // traet all JS code as newer version

// alert(3+3) // we are using node js, not browser

let name = "adarsh"
let age = 18
let isLoggedIn = false
let state = null

// console.log(name)
// console.log(typeof(name))
// console.log(typeof(age))
// console.log(typeof  age)



// datatype conversion  // 

// let score = "adarsh"
// console.log(typeof score)

// let d = null
// console.log(typeof d)

// let a = Number(d)
// console.log(typeof a)
// console.log(a)  // output --> NaN = not aa no.

// let stringnumbeer = 33
// let h = String(stringnumbeer)
// console.log(h)
// console.log(typeof stringnumbeer)



// NON-PRIMITIVE DATATYPE or REFERENCE TYP E//

// 1. array
// 2. objects
// 3. functions

const heros = ['a','b','c']
console.log(heros)

const myfun = function(){
    console.log("hello world")
}



// MEMORY //

// Stack(Primitive), Heap(Non-primitive)

let myYoutubename = "mr.indianHacker"
let anothername = myYoutubename  // here copy is come not the original value

anothername = "survival"
console.log(myYoutubename)
console.log(anothername)


// heap //

let userone = {
    email: "123@.com",
    upi:  "user@ybl"
}

let usertwo = userone
usertwo.email = "add@.com"

console.log(userone.email)  // here changement come in original value
console.log(usertwo.email)





