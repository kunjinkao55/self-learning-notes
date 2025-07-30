# 类与结构体的区别
类默认属性为私有，结构体默认属性为公有
结构体的所有内部数据成员都需要初始化
类做到了分离公共成员和私有成员——为实现“抽象”做准备

```cpp
//student.h
#include <string>
class Student {
public:
Student() : age(0) {} // Default constructor initializing age to 0
Student(std::string name, int age) : name(name), age(age) {} // Parameterized constructor
std::string getName();
void setName(std::string name);
int getAge();
void setAge(int age);
~Student();//解构函数，释放资源
private:
std::string name;
std::string state;
int age; };

```
```cpp
//student.cpp
#include "Student.h"
#include <stdexcept>
std::string Student::getName(){ return name; }
void Student::setName(std::string name){ this -> name = name; }
int Student::getAge(){ return age; }
void Student::setAge(int age)
{ if(age >= 0) { this -> age = age; }
else
printf("Age cannot be negative!"); }
```
```cpp
#include <iostream>
#include "Student.h"

int main(){
    Student student("kuji", 20);
    std::cout << "Name: " << student.getName() << std::endl;
}
```
# 命名空间
命名空间划分了一个“作用域”，意味着这是在该命名空间中的接口函数，在该作用域中，这个类特定的私有属性可以被访问到
例如：
在Student命名空间下对getName()函数的实现里可以看到，我们访问到了Student对象的私有属性age
# this关键字
this是一个对象指针，当对对象实例调用参数时，this指向这个对象实例
伪代码：
```
Class an_object(parameters);
an_object.function(parameter){
	...
	this->parameter = parameter_with_some_translation;//对输入参数parameter做一些操作，然后赋值给an_object对象的parameter；
	...
}
```
# 构造函数与解构函数
构造函数与类目相同，无需声明返回类型，返回一个被初始化的对象实例
使用初始化列表构建构造函数是通用的方式
解构函数~ClassName()，在对象使用完成后回收内存

私有属性通过公共方法间接访问
（公共方法定义在作用下，也就是说私有属性可以在类作用域中任意访问）

# 模板类
***Fundamental Theorem of Software Engineering: Any problem can be solved by adding enough layers of indirection.***
将属性的类型作为传入参数构建的类
模板->传入参数类型->确定为具体的类->使用
```cpp
template<typename First, typename Second> class MyPair{
public:
	...
	First getFirst();
	...
private:
	First first;
	Second second;
};
```
模板类在头文件声明和cpp文件中定义时，都不能缺少模板声明
template<typename First, typename Second> First MyPair::getFirst(){return this.first;}

## 注意：模板在实例化之前不会发出代码，因此将.cpp包括在.h中，而不是相反！

解释：
在非模板类中，在.cpp文件里#include .h文件，
编译.cpp文件时可以看到.h文件里的所有定义，.cpp预先正常编译, 
那么在main.cpp中就可以正常使用头文件中声明的所有函数（在.cpp中已经编译了）

但是在模板类中，过程为：
在main中看到了include .h头文件，不管它，继续执行
给模板传入类型参数尝试实例化，这时候回到头文件中找到对应模板，尝试实例化
如果（在头文件中没有include .cpp文件，则找不到函数实现方式，编译错误）
所以必须在.h中include .cpp

![[CS106L/picture/image 1.png|313x180]]
修复：
![[CS106L/picture/image-1 1.png|315x178]]
