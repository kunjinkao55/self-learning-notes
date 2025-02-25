//#include <iostream>
//using namespace std;
//
//struct Link {
//
//	int label;
//	Link* next;
//	Link* last;
//	Link(int l,Link* n = nullptr):label(l),next(n){}
//
//};
//
//int main() {/* phase1
//	//字符指针的特殊处理
//	char x = 'X';
//	char y[] = "wwwwwwwwwwwwwwwwwww";
//	char* px = &x;
//	cout << px << endl;//会将x后面的垃圾值一并读取，直到读取到\0
//	cout << *px << endl;
//
//	//动态变量
//	int n;
//	cin >> n;
//	int* m = new int(6);//初始化为6
//	int* p = new int [n] {1, 2, 3};//初始化
//	//等价于
//	int* q = (int*)malloc(sizeof(int) * n);//C风格
//	//动态变量是匿名的
//    
//	//释放操作，必须手动
//	delete p;
//	free(q);*/
//
//	/*phase2 链表*/
//	Link* l0=new Link(0);
//	Link* l1= new Link(1, l0);
//	l1->next->last = l1;
//	Link* l2= new Link(2, l1);
//	Link* l3= new Link(3, l2);
//	l0->next = l3;
//	Link* head = l3;
//	;
//	//const 修饰符作用于它左边的对象，如果左边什么都没有就作用于它右边的对象
//}