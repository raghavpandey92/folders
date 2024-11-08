// ARRAY //

// const arr = [0,1,2,3,4,5]  // declare array
// console.log(arr[4]) 

// const heros = ["shaaktiman" , "naagraj"]

// const arr2 = new Array(1,2,3,4) // declare of array
// console.log(arr2[1])


// ARRAY  METHODS //

// arr.push(6)
// console.log(arr);
// arr.pop()
// console.log(arr)

// arr.unshift(9)
// arr.shift()
// arr.shift()
// console.log(arr.indexOf(3))
// console.log(arr)


// const newarr = arr.join()
// console.log(newarr)
// console.log(typeof newarr)


// SLICE AND SPLICE concept //

// const arr3 = [1,2,3,4,5,6]
// const h = arr3.slice(1,3)
// console.log(h)

// console.log('b' ,arr3)  // in this output

// const t = arr3.splice(1,3)
// console.log(t)
// console.log(arr3) // and in this output see the difference 




// ARRAY PART-2 //

const hero = ['ad','vin','may']
const dchero = ['supermen','flash','batman']

hero.push(dchero)  // by this array go inside the array
// console.log(hero)
// console.log(hero[3][2])

  
let allhero = hero.concat(dchero)
// console.log(allhero)  // or we can do another way

allhero = [...hero,...dchero]
// console.log(allhero)



console.log(Array.isArray('adarsh'))
console.log(Array.from('raghav'))


let score1 = 100;
let score2 = 300;
let score3 = 400;
let score4 = 500;
console.log(Array.of(score1,score2,score3,score4))


