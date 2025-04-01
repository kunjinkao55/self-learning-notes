#include<iostream>

using namespace std;
class Deque {
private:
    int size;
public:
    int size() {
        return size;
    }
    virtual void addFirst(int x) = 0;
    virtual void addLast(int x) = 0;
    virtual int get(int inx) = 0;
    virtual int getFirst() = 0;
    virtual int getLast() = 0;
    virtual string toString() = 0;
    virtual int removeFirst() = 0;
    virtual int removeLast() = 0;

};