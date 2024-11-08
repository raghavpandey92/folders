// falsy values are
// false, 0, -0, BigInt On, "", null, undefined, NaN

// truthy values are 
// "0", 'false' , " ",[] , {} , function(){}

const emptyobj = {}
if(Object.keys(emptyobj).length === 0){
    console.log('object is empty')
}

