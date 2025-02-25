#include "MonotonicStack.h"

int MonotonicStack::size() {
    return s.size();
}

void MonotonicStack::pop() {
    if (s.size() == 0)
        return;
    s.pop();
}

int MonotonicStack::top() {
    if (s.size() == 0)
        return 0;
    return s.top();
}

int MonotonicStack::push(int element) {
    int temp = element;
    int flag = 0;
    while (s.size() > 0 && s.top() > element) {
        flag += 1;
        s.pop();
    }
    s.push(element);
    return temp - flag * element;
}

int MonotonicStack::function(const int* arr, int n) {
    int ans = 0;
    int temp = 0;
    MonotonicStack* ms = new MonotonicStack;
    for (int i = 0; i < n; i++) {
        ans += ms->push(arr[i]);
        
    }
    return ans;
}

/*
����ʹ�����main�����ڱ��ؽ��е��ԣ����ύʱ����������ע��
*/
int main() {
    MonotonicStack* ms=new MonotonicStack;
    ms->push(8);
    ms->push(4);
    ms->push(6);
    ms->push(2);
    ms->push(3);
    cout<<ms->top()<<endl;
    ms->pop();
    cout<<ms->top()<<endl;
    ms->pop();
    cout<<ms->size()<<endl;
    delete ms;

    ms = new MonotonicStack;
    int arr[] = { 8,4,6,2,3 };
    cout << ms->function(arr, 5) << endl;
}
