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
//	//�ַ�ָ������⴦��
//	char x = 'X';
//	char y[] = "wwwwwwwwwwwwwwwwwww";
//	char* px = &x;
//	cout << px << endl;//�Ὣx���������ֵһ����ȡ��ֱ����ȡ��\0
//	cout << *px << endl;
//
//	//��̬����
//	int n;
//	cin >> n;
//	int* m = new int(6);//��ʼ��Ϊ6
//	int* p = new int [n] {1, 2, 3};//��ʼ��
//	//�ȼ���
//	int* q = (int*)malloc(sizeof(int) * n);//C���
//	//��̬������������
//    
//	//�ͷŲ����������ֶ�
//	delete p;
//	free(q);*/
//
//	/*phase2 ����*/
//	Link* l0=new Link(0);
//	Link* l1= new Link(1, l0);
//	l1->next->last = l1;
//	Link* l2= new Link(2, l1);
//	Link* l3= new Link(3, l2);
//	l0->next = l3;
//	Link* head = l3;
//	;
//	//const ���η�����������ߵĶ���������ʲô��û�о����������ұߵĶ���
//}