#include <iostream>
using namespace std;
struct Node {
	int num;
	Node* near[10] = { nullptr };
	Node(int n) :num(n) {};
};