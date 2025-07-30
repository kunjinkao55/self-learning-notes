# 迭代器 Iterators
迭代器为数据结构提供了一套通用的访问接口
### 实际上类似一个指针！
```cpp
#include<iostream>

#include<set>

int main(){

    std::set<int> s = {0,1,2,3,4};

    std::set<int>::iterator iter = s.begin();//at 0

    while(iter != s.end()){//允许比较操作

        std::cout << *iter << std::endl;

        iter++;

    }

    return 0;

}
```
这段代码在vs里是能跑的，不知道为什么放到这里面不行了

### 迭代器的类型
1.只读迭代器——input iterator，只能单步迭代，不允许修改被引用的元素
2.只写迭代器——output iterator，单步，只写不读
3.向前迭代器—— Forward Iterator：该类迭代器可以在一个正确的区间中进行读写操作，它拥有Input Iterator的所有特性，和Output Iterator的部分特性，以及单步向前迭代元素。
4.双向迭代器—— Bidirectional Iterator：该类迭代器是在Forward Iterator的基础上提供了单步向后迭代元素的能力。
5.Random Access Iterator：该类迭代器能完成上面所有迭代器的工作，它自己独有的特性就是可以像指针那样进行算术计算，而不是仅仅只有单步向前或向后迭代。

解释：
- Input iterators can be on the RHS (right hand side) of an = sign: `auto elem = *it;`
    
- Output iterators can be on the LHS of = : `*elem = value;`
    
- Random access iterators support indexing by integers!
```
it += 3; // move forward by 3 
it -= 70; // move backwards by 70 
auto elem = it[5]; // offset by 5
```
为什么是 ++iter 而不是 iter++？  
​**答案**：++iter 返回递增后的值！iter++ 返回先前的值，然后再递增。（只是稍微浪费一点时间）
迭代器的拷贝是独立的
具有迭代器的容器可以使用for(element : container) 迭代
# 指针 
存储内存地址的数据类型
