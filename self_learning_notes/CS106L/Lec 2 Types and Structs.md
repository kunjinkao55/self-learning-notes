![[CS106L/picture/image-1.png|224x158]]
```cpp
#include <iostream>
int main() {
for (char ch : "CS106L"){
	std::cout<< ch << std::endl;
}
double b = 1.2 * 5 - 1;
std::cout << b;
return 0;
}
```

使用g++编译
```cmd
g++ fileName -o main
```
# 类型 
size_t 规定上界的无符号整数类型

## std::pair 一个模板

using关键字可用于给已有的类型创建别名，比传统的typedef更强
![[CS106L/picture/image-3.png|441x234]]
auto 关键字自动识别复杂类型，并且auto给予的类型也是静态类型，一旦确定不能改变

总结
![[CS106L/picture/image-3.png|441x234]]