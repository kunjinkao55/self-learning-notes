#include <iostream>
#include <stack>
using namespace std;

class MonotonicStack
{
private:
    stack<int> s;
public:
    int size();
    void pop();
    int top();
    int push(int element);
    int function(const int* arr, int n);
};

/*
���г�Ա����s��stl�е�stack���͵ı��������Ѿ���װʵ�ֺõ����ݽṹ��
�����ʹ������ʹ��s.size()������s��Ԫ��������ʹ��s.push(int)��һ��int��ֵ��ջs��
s.top()����s��ջ��Ԫ�أ���s.pop()������s��ջ��Ԫ�ء�
��ʾ����ʹ��stack sʱ������s.pop()��s.top()ǰ��Ӧ�����s���Ƿ���Ԫ�أ��������������δ���

push�ķ���ֵ�������в�����в��ԣ�����Է����κ�ֵ�����������ֵ��һ�������ӿڣ�
�����˼����������������ֵ����ؽ��Part-2������ :)

��Ҫ�㲹�����������MonotonicStack.cpp����TODO�����
��Ҫ�㲹�����������MonotonicStack.cpp����TODO�����
��Ҫ�㲹�����������MonotonicStack.cpp����TODO�����
*/
