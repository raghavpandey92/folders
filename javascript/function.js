// FUNCTION //

function nname(){
    // console.log('t')
    // console.log('a')
    // console.log('a')
    // console.log('r')
    // console.log('e')
}
nname()


// arguments //

function add2no(num1,num2){
    // console.log(num1 + num2)
}
add2no(3,4)  // arguments 


function login(username){
    return `${username} just logged in`
}
let resultt = login('adarsh')
let resulttt = login()
// console.log(resultt)
// console.log(resulttt)



// FUNCTION WITH OBJECT AND ARRAY //

function calculate(...num1){
    return num1
}
// console.log(calculate(200,400,500))



const user = {        // object
    ussername: 'fgh',
    price: 565
}
function handleobject(anyobject){
    // console.log(`username is ${anyobject.ussername} and price is ${anyobject.price}`)
}
// handleobject(user)   
// or we can pass object also here //

handleobject({
    ussername : 'adarsh',
    price: 444
})




const arr1 = [4,56,7,8,9]
function array2(getArray){
    return getArray[1]
}
console.log(array2(arr1))