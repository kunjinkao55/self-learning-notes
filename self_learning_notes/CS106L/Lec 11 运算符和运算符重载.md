\+ - * / % ^ & | ~ ! , = < > <= >= ++ -- << >> == != && || += -= *= /= %= ^= &= |= <<= >>= [] () -> ->* new new[] delete delete[]
# 成员函数
在类中添加方法 bool operator \[运算符] (const typename& rhs) 看情况添加const；
二元运算符需要右参数
前缀一元运算符不需要参数
后缀一元运算符添加哑元参数(int)，无实际效果，仅作为标识

# 非成员函数
在类外添加方法 returnType operator \[运算符] (const typename& lhs，const typename& rhs) 看情况添加const；
实现同时取运算符左侧和右侧参数的功能

类的非成员函数访问类的私有属性：友元函数
在类声明时，在public字段声明非成员函数，前缀friend关键字，就允许这个类的私有变量被该非成员函数访问到
例子：
```cpp
std::ostream& operator << (std::ostream& out, const Time& time) 
{ out << time.hours << ":" << time.minutes << ":" << time.seconds;
// 1) print data to ostream return out;
// 2) return original ostream
} 
// in time.h --friend declaration allows access to private attrs public: 
friend std::ostream& operator << (std::ostream& out, const Time& time); 
// now we can do this!
cout << t << endl;
// 5:22:31
```

另外，也可以以同样的方式声明一个类的friend类，将这个类的私有变量暴露给friend类
```cpp
class A{
public:
	friend class B;//B可以访问到A的private属性
......
}

```

需要注意的是，类外重载会影响全局环境
## 运算符重载规则

1. 当你看到它时，意义应该是显而易见的
2. 应与相应的算术运算相当
3. 不要将 `+` 定义为差集运算！
4. 当含义不明显时，给它一个普通的名字


# 关于重载运算符的返回类型说明
- **返回一个新对象**：算术运算符如 `+`, `-`, `*`, `/` 通常不修改原对象，而是返回一个包含运算结果的**新对象**。
    
    C++
    
    ```
    // 成员函数版本
    MyType operator+(const MyType& rhs) const;
    ```
    
- **返回对象的引用**：赋值运算符如 `+=`, `-=`, `<<=` 以及流插入/提取运算符 `<<`, `>>` 通常会返回一个**左值引用**，以支持链式调用 (e.g., `a += b += c;` or `cout << a << b;`)。
    
    C++
    
    ```
    // 成员函数版本
    MyType& operator+=(const MyType& rhs);
    // 非成员函数版本
    friend std::ostream& operator<<(std::ostream& out, const MyType& obj);
    ```
    
- **返回布尔值**：比较运算符如 `==`, `!=`, `<`, `>` 才返回 `bool`。
    
    C++
    
    ```
    // 成员函数版本
    bool operator==(const MyType& rhs) const;
    ```