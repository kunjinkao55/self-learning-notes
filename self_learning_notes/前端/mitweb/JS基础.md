#### 比较运算符
双等号会自动强制类型转换
三等号是严格比较

大部分类似cpp
类型：Boolean Number String Null Undifined
#### 定义变量 let可变 const不可变
```javascript
let myBoolean = true;
const myNumber = 12;
let a; //undifined

myBoolean = false;
//myNumber = 1; Error
console.log(`myBoolean = ${myBoolean}`);
console.log(a);
```
命名规范：驼峰
var也可以定义变量，但是是函数作用域，不建议使用
let是代码块作用域


null是显式定义为空；
内嵌表达式字符串（模板字符串）: \` * + ${变量}\`，演示见上面
数组的操作类似python 使用let定义
数组的末尾元素可以像栈一样使用pop()和push()

条件语句 if 、else if 、 else

对于数组的of遍历：
```javascript
const pets = ["cat","dog","pig","shit"];
for(const animal of pets) { //这里是of！
//每轮循环从 for 那里重新对animal赋值，phrase同理，所以可以使用const
const phrase = "I love " + animal + " ! ";
console.log(phrase);
}
```
#### 对象
javascript的对象更类似python的字典，只是键值对
##### 对象解构
是一种快速从对象中提取多个变量的赋值方式
对象解构要求外部变量名和对象属性名一致，或者不一致时使用冒号重命名，否则外部变量无法解构，会变成undifined

```javascript
const myCar = {
	make : "Ford",
	model : "big",
	year : 2005,
	color : "dark"
};

console.log(myCar.color);
console.log(myCar["color"]);
//console.log(myCar[color]);//字典型访问时要给属性加上引号

//对象结构
const make = myCar.make;
const year = myCar.year;
//就相当于 使用对象解构

const {model, make:made , year:yeer} = myCar;
//很方便！

console.log(make === made);
console.log(model);

```
可以像字典一样访问，也可以像对象一样访问

数组/对象 进行比较的时候，=== 比较的是对象引用
```javascript
let a0 = {name:"kuji"};
let a1 = {name:"kuji"};
let a2 = a0;

console.log(a0 === a1);//false
console.log(a0 == a1);//还是false,因为地址再怎么转换也不一样
console.log(a0 === a2);//true
```
数组对象的深复制：(新特性)
```javascript
let a = {name:1,years:2};
let acopy = {...a};
let b = [1,2,3,4,5];
let bcopy = [...b];
console.log(bcopy[3]);
```
# 函数
```javascript
const plusN = (origin,n)=>{
return origin + n;
}
const max = (a,b)=>{
	if(a > b) {return a;}
	return b;
}
const subN = (origin,n)=>{
return origin - n;
}

let origin = [0,1,2,3,4];
let ano = [4,7];
let cont = [1,1,2,0,2];
let funcArrey = [plusN,subN,max];//待传入的函数数组
//练习在函数中创建数组并对数组应用另一个函数
const funcsToArrey = (funcs,originarrey,ano,cont) => {
//创建一个新数组，对原数组d第i个元素和ano的第i个元素应用funcs的第i个函数元素后输出，长度超出后循环
	let newarrey = [];
	let i = 0,j = 0;
	for(const element of originarrey){
		newarrey.push(funcs[cont[i] % funcs.length](element,ano[j]));
		i++,j++;
		i = i % cont.length;
		j = j % ano.length;
	}
	return newarrey;
}

let test = funcsToArrey(funcArrey,origin,ano,cont);
for(const ans of test){
console.log(ans);
}
```
javascript和py一样视函数为一等公民

## 类
像py一样，不深入讲解

# 回调函数和数组操作
练习见上面的代码块

函数的单行定义方式
(inputs) => (output)
//output是一个表达式
### map函数
Array.map(func)
对数组的所有元素使用func
```javascript
const rectangles = [
{width:1,height:1},
{width:5,height:10},
{width:6,height:6}
];
const anses = rectangles.map((rectangle) => (rectangle.width * rectangle.height));
for(const ans of anses ){
console.log(ans);
}
```

### filter函数：筛选出func返回true的元素
newArray = Array.filter(func);

