const studentDB = ['jordan', 'john', 'nick']

const findStudent = (allStudents, studentName) => {
    for (let i = 0; i < allStudents.length; i++) {
        if (allStudents[i] == studentName) {
            console.log(`Found ${studentName}`);
        }
    }
};

// findStudent(studentDB,"jordan");
//O(n)
const numbers = [1, 2, 3, 4, 5];

const getElement = (arr, index) => arr[index];
// console.log(getElement(numbers,1));
// O(1)

function findPairs(arr) {
    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr.length; j++) {
            console.log(`Pair {${i},${j}}`);
        }
    }
}
// O(n**2)
// findPairs(numbers);

class myArray {
    constructor() {
        this.length = 0;
        this.data = {};
    }
    push(val) {
        this.data[this.length] = val;
        // console.log("-------",this.data[this.length]);
        this.length++;
        return this.length;
    }
    get(index) {
        return this.data[index];
    }
    pop() {
        delete this.data[this.length - 1];
        this.length--;
    }
    shift() {
        // const firstItem = this.data[0];
        for (let index = 0; index < this.length - 1; index++) {
            this.data[index] = this.data[index + 1];
        }
        delete this.data[this.length - 1];
        this.length--;
        // return firstItem;
    }
    deletebyIndex(val) {
        delete this.data[val];
        for (let i = 0; i < this.length - 1; i++) {
            if (i - val < 0) continue;
            else this.data[i] = this.data[i + 1];
        }
        this.pop();
    }
}

// const myNewArray = new myArray();
// myNewArray.push(11919);
// myNewArray.push("mango")
// myNewArray.push(11914);
// console.log(myNewArray.get(1));
// console.log(myNewArray.get(2));
// myNewArray.pop();
// console.log(myNewArray);
// myNewArray.shift();
// myNewArray.deletebyIndex(0);
// console.log(myNewArray);

function reverseString(s) {
    let ss = "";
    for (let index = s.length - 1; index >= 0; index--) {
        ss += s[index];
    }
    return ss;
}
const reverseString2 = (str) => str.split("").reverse().join("");
function palindrome(s) {
    let ss = reverseString2(s);
    if (ss == s) return true;
    return false;
}

function reverseNum(num) {
    let x = 0;
    while (num > 0) {
        const digit = num % 10;
        // console.log(digit);

        num = Math.floor(num / 10);
        x = x * 10 + digit;
    }
    return x;
}
// console.log(reverseString2("Hello"));
// console.log(palindrome("Hello"));
// console.log(palindrome("ollo"));
// console.log(reverseNum(123));

const capitalize = str => {
    return str.toLowerCase()
    .split(' ')
    .map(word => word[0].toUpperCase() + word.slice(1))
    .join(" ");
};
// console.log(capitalize("hello world"));

const fizzbuzz= (i)=>{
    let s="";
    if(i%3==0) s+="Fizz";
    if(i%5==0) s+="Buzz";
    else if(i%3) s=i;
    return s;
};
for(let i=1;i<=15;i++){
    console.log(fizzbuzz(i));
}