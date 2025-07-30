# 概念：
![[CS106L/picture/image-6.png|361x194]]

# Output Streams
type: std::ostream
Converts any type into string and sends it to the stream
接收输入，转换为字符串，有一个固定的输出方向

std :: ofstream out ("fileName");//声明一个向文件输出的流

# Input Streams
用于从流中提取数据并将其放入变量
会忽略多余的值
type： std::istream
先存到缓冲区内
输入中途失败后不再继续后续输入
## getline()
![[image-7.png|501x257]]
In contrast:
● “>>” 只读，直到遇到空格
● BUT “>>” 能够自动把字符转换为内置数据类型，getline can only produce strings.
●getline 能够停止读入，在遇到任何规定的字符时

\>> 和 getline() 不能混和使用
本质：getline()直接观测到>>忽略的的换行符，覆盖了缓冲区
## ifstream 文件输入流
std::ifstream in(“out.txt”);
//定义输入流in
// in is now an ifstream that reads from out.txt
string str;
in >> str; // in的第一个词组写入str

# Stringstreams 字符串流
![[image-8.png|354x208]]
