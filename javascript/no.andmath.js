const score = 400
// console.log(score);

// const balance = new Number(100)
// console.log(balance)

// console.log(balance.toString());
// console.log(balance.toFixed(5));

// const otherno = 123.8976
// console.log(otherno.toPrecision(6));

// const hundr = 1000000;
// console.log(hundr.toLocaleString('en-IN'))


//====================  MATHS  ====================//

// console.log(Math);
// console.log(Math.abs(-45))
// console.log(Math.round(45.8))
// console.log(Math.ceil(4.2));   // it take the highest value 
// console.log(Math.floor(4.9))   // it take the  minimum value




//===================  DATE ======================//

let mydate = new Date()   // this is an object
console.log(typeof mydate)
console.log(mydate.toString());
console.log(mydate.toDateString())
console.log(mydate.toLocaleDateString())
console.log(mydate.getMonth())

// when you want to create self made date then //
 let createdate = new Date(2024,8,18)    // in JS month start from '0' index//
 console.log(createdate.toDateString())



