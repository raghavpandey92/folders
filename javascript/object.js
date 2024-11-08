// object Literals //

const jsuser = {       // this is how we create object
    name: 'adarsh ',
    'full name': 'raghav pandey',
    age: 78,
    location: 'paratapgarh',
    email: 'pandey45.com',
    isloggin: false,
    loginday: ['monday','tuesday']
}

// console.log(jsuser.email)
// console.log(jsuser['email'])
// console.log(jsuser['full name'])

// jsuser.email = 'adars565.com'
// console.log(jsuser)
// Object.freeze(jsuser)    // by this changement not show in result 
// jsuser.email = '565.com'
// console.log(jsuser)


// another way to declare object //

const h = new Object();
// console.log(h);

//or //

const k = {}
k.id = '12345'
k.name = 'ashtoush'
k.isLoggedIn = false
// console.log(k)

 
const yho = {
    email: 'ghjk',
    fullname:{
        userfullname: {
            firstn : 'dfg',
            lastn : 'dsa', 
        }
    }
}
// console.log(yho.fullname.userfullname.firstn)

const obj1 = {1:'a' , 2:'b'}
const obj2 = {3:'a' , 4:'b'}
// const obj3 = Object.assign({},obj1,obj2)

const obj3 = {...obj1,...obj2} // this is SPREAD operator similar as assign 
// console.log(obj3)



// DESTRUCTURE //

const course = {
    coursename: "js is hindi",
    price:'999',
    courseinstructor: 'klmn'
}
console.log(course.courseinstructor) // since courseinstructor name is large now deconstruct//

const{courseinstructor: abc} = course

console.log(abc)





