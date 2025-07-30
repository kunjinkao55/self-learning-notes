大纲
![[CS106L/picture/image-4.png|325x231]]

# 初始化
方法一：先声明再用点操作符赋值  
方法二：Student s = {“kuji”， 1， 19}；//标准初始化方式，可以省略等号

*vector的初始化比较反常识*
[[GDB online Debugger | Code, Compile, Run, Debug online C, C++](https://www.onlinegdb.com/8uxNBkJBx)]()
对vector使用小括号赋值时会产生神奇效果


# 使用auto

编译器自动识别变量的类型，并非没有类型 
不能滥用

# structured binding
类似于JavaScript的解离，直接从高级数据结构中抽出内部的次级结构

```cpp
#include <iostream>
#include <string>

int main(){
	auto p = std::make_pair("SS",5);
	auto [a,b] = p;//stuctured binding
	std::cout << a << b << std::endl;
	const int c_x = 1;
	int& x = c_x;
	int y = 1;
	const int& c_y = y;
	std::cout << x << c_y;
}

```

# Reference 别名
直接操作本体 定义时要加&

右值不能被引用，只有变量能够被引用
![[CS106L/picture/image-5.png|275x290]]

# const 关键字
不可修改
创建引用时，可以给变量创建常量引用，但是不能给常量创建变量引用
核心思想是：**权限可以被平级传递或缩小，但绝不能被放大。**