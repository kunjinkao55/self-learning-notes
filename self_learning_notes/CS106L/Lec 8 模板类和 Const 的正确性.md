第一个重点：
```
//mypair.cpp
#include “mypair.h” 
template <class First, typename Second>
First MyPair::getFirst(){ return first; } 
//Compile error! The namespace of the class isn’t just MyPair 

//mypair.cpp 
#include “mypair.h”
template <class First, typename Second>
First MyPair<First, Second>::getFirst(){ return first; } // Fixed Here,类外定义模板成员函数时需要提供完整的模板参数列表
```
第二个重点：
![[CS106L/picture/image-2 1.png|374x632]]
### 问题分析

1. **背景设定 (vector.h)**：代码定义了一个类模板 `vector<T>`。在这个类模板内部，使用 `using` 关键字定义了一个公共的成员类型 `iterator`，它是 `T*` 的别名。同时，声明了一个返回 `iterator` 类型的成员函数 `begin()`。
    
2. **编译错误 (vector.cpp - 幻灯片 35)**：当尝试在类外实现 `begin()` 函数时，代码 `iterator vector<T>::begin() { ... }` 导致了编译错误。
    
3. **问题根源：依赖名称的歧义性**
    
    - `vector<T>::iterator` 是一个**依赖名称**，因为它的确切含义依赖于模板参数 `T`。在编译器看到这段代码时，它并不知道 `T` 将来会是什么具体类型。
        
    - 编译器面临一个歧义：`vector<T>::iterator` 究竟是一个**类型**（比如 `int*`）还是一个**值**（比如一个静态成员变量 `static int iterator;`）？
        
    - C++ 标准规定：在遇到这种歧义时，编译器**默认假定这个依赖名称是一个值，而不是一个类型**。
        
    - 因此，当编译器解析 `iterator vector<T>::begin()` 时，它认为 `iterator` 是一个变量，这使得整个函数定义的语法结构是错误的，所以它会报错。
        

### 解决方案

- **最终方案 (幻灯片 37)**：正确的写法是使用 `typename` 关键字：
    
    C++
    
    ```
    template <typename T>
    typename vector<T>::iterator vector<T>::begin() 
    { ... }
    ```
    
    - `typename` 关键字的作用就是明确地告诉编译器：“**请相信我，`vector<T>::iterator` 这个依赖名称在这里代表的是一个类型，而不是一个值。**”
        
    - 通过消除这种歧义，编译器就能够正确地将 `vector<T>::iterator` 解析为 `vector<T>::begin()` 函数的返回类型，编译便能顺利通过。
        

总结来说，当你在模板编程中需要使用一个嵌套在类模板中的依赖名称作为类型时（例如作为函数返回类型、参数类型或局部变量类型），你必须在其前面加上 `typename` 来帮助编译器正确解析代码。
也就是说：当一个“类型别名”的定义依赖于一个模板参数时，编译器才无法自行假定它是一个类型，而认为它是一个值。

 **==tl:ed:When returning nested types (like iterator types), put " typename ClassName::member_type "" as return type, not just member_type==**
## summary
类声明符后，可以直接使用别名（例如内部功能参数，内部功能主体）。-在类声明符之前，请使用TypeName

第三个重点：
# 正确使用const关键字
最重点：不能把一个常量赋值给非常量引用
std::string stringify(const Student& s){ 
	return s.getName() + " is " + std::to_string(s.getAge()) + " years old." ; }
//==compile error!==-The compiler doesn’t know getName and getAge don’t modify s

修改方法：保证getName()不会修改常量引用s —— 将Student类的这个方法声明和定义为const方法 —— 将const关键字缀在方法签名的末尾
### 即：应该const的地方全部const
声明：std::string getName() ==const;==
定义：std::string Student::getName() ==const== { return name; }

### 停止造轮子
有时候需要为同一个功能的方法提供对const对象和非const对象的两套接口，这时应该使用类型转换，让const方法复用非const方法

会根据调用方法的对象是否是const选择合适的重载方法

## C++转换

![[CS106L/picture/image-3 1.png]]
第四个重点：const的修饰规则

![[CS106L/picture/image 2.png]]
![[image-1 2.png]]


const_iterator end() const; 底层的数据是const的，不能修改数据，但是迭代器可以移动；
const iterator end();迭代器是const的，不能移动，但是可以修改底层数据；

const 在 \* 左边：指向常量的指针 
const 在 \* 右边：常量指针

注意：
1. 当 `const` 应用于一个已经是“指针类型”的别名时，它的作用是**将指针本身变为常量**，而不是指针所指向的内容。
    
2. **类型替换与解析**：
    - 编译器会将 `const iterator` 进行展开。
    - 它看到 `iterator` 是 `std::string*`
    - 因此，`const iterator` 就等同于 `const (std::string*)`。
    - 根据 C++ 语法规则，这被解析为 `std::string * const`。

## 回顾 [¶](https://note.lhmd.top/CS%E8%AF%BE%E7%A8%8B/CS106L/CS106L%E8%AF%BE%E7%A8%8B%E7%AC%94%E8%AE%B0/#recap_4 "Permanent link")

### 模板类 [¶](https://note.lhmd.top/CS%E8%AF%BE%E7%A8%8B/CS106L/CS106L%E8%AF%BE%E7%A8%8B%E7%AC%94%E8%AE%B0/#template-classes_1 "Permanent link")

- 在.h 文件中，在类定义前添加 `template<typename T1, typename T2 ...>`
- 在.cpp 文件中所有函数签名前添加 `template<typename T1, typename T2 ...>`
- 在返回嵌套类型（如迭代器类型）时，将 `template<typename T1, typename T2 ...>::member_type` 作为返回类型，而不仅仅是 `member_type`
- 模板直到实例化才会生成代码，所以将 `#include` .cpp 文件添加到.h 文件中，而不是反过来

### 常量和常量正确性 [¶](https://note.lhmd.top/CS%E8%AF%BE%E7%A8%8B/CS106L/CS106L%E8%AF%BE%E7%A8%8B%E7%AC%94%E8%AE%B0/#const-and-const-correctness "Permanent link")

- 在应用程序代码中尽可能使用 const 参数和变量
- 类中所有不会改变其成员变量的成员函数都应该标记为 `const`
- auto 会丢弃所有 const 和&，所以一定要指定
- 为所有类制作迭代器和 const_iterators！
- **const iterator** = 不能递增迭代器，可以解引用并修改底层值
- **const_iterator** = 可以递增迭代器，不能解引用并修改底层值
- **const const_iterator** = 不能递增迭代器，不能解引用并修改底层值

