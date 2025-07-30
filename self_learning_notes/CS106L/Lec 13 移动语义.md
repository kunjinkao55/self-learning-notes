右值是临时的
l-values live until the end of the scope r-values live until the end of the line
### `&&` 有什么用？

`&&` 这个符号，就是专门用来“捕捉”上面说的那些“右值”的。

它的核心用途只有一个：**实现移动 (Move) 语义，提升性能。**

当你写一个函数，参数是 `Widget&&` 时，你等于是在告诉编译器：

> “这个函数专门处理那些临时的、马上就要被销毁的 `Widget` 对象。因为我知道它马上就要死了，所以我**不需要小心翼翼地去拷贝它**，我可以**直接把它里面的东西拿过来用（移动）**，这样会快得多。”

### 总结

- `&` (左值引用)：给一个**有名字的变量**取一个别名。——对左值使用
    
- `&&` (右值引用)：给一个**临时的、没有名字的值**取一个别名，其唯一目的是为了安全、高效地“偷走”它的资源。——应该保证只对右值使用
    

所以，移动构造函数 `Widget(Widget&& rhs)` 和移动赋值运算符 `Widget& operator=(Widget&& rhs)` 使用 `&&`，就是为了精确匹配到那些可以被安全“掏空”的临时对象，从而避免昂贵的拷贝操作。

**`std::move`**：
    
    - 它本身不做任何移动操作。
        
    - 它的唯一作用是**将一个左值（有名字的变量）强制转换为右值引用**，告诉编译器：“你可以把这个对象当成一个临时对象来处理了，可以安全地移动它。”

Don’t use std::move outside of class definitions, never use it in application code

If your class has copy constructor and copy assignment defined, you should also define a move constructor and move assignment

-Define these by overloading your copy constructor and assignment to be defined for Type&& other as well as Type& other

-Use std::move to force the use of other types’ move assignments and constructors

-All std::move(x) does is cast x as an r-value

-Be wary of std::move(x) in main function code!