//#include <iostream>
//using namespace std;
//struct Node {
//    int num;
//    Node* next;
//    Node(int num, Node* next) : num(num), next(next) {}
//    Node(int num) : Node(num, nullptr) {}
//};
//
//Node* build_linked_list() {
//    int n ;
//    cin >> n;
//    if (n == -999) return nullptr;
//    Node* head = new Node(n);
//    Node* point = head;
//    while (1)
//    {
//        cin >> n;
//        if (n == -999)
//            break;
//        Node* node = new Node(n);
//        point->next = node;
//        point = point->next;
//    }
//    point = nullptr;
//    return head;
//}
//void printlist(Node* h1)
//{
//    Node* p = h1;
//    while (p != nullptr)
//    {
//        cout << p->num<<"  ";
//        p = p->next;
//    }
//    delete p;
//}
//
//void insertNode(Node* head,int n,int site)//在第n个位置插入
//{
//    Node* new_node = new Node(n);
//    Node* point = head;
//    while (point->num != site)
//    {
//        point = point->next;
//    }
//    new_node->next = point->next;
//    point->next = new_node;
//    delete point;
//}
//
//Node* merge(Node* h1, Node* h2) {
//    Node* result = new Node(-1000);
//    Node* p = result;
//    Node* point1 = h1; Node* point2 = h2;
//    while (point1!= nullptr && point2!=nullptr )
//    {
//        if (point1->num <= point2->num)
//        {
//            Node* temp = new Node(point1->num);
//            p->next = temp;
//            p = p->next;
//            point1 = point1->next;
//        }
//        else
//        {
//            Node* temp = new Node(point2->num);
//            p->next = temp;
//            p = p->next;
//            point2 = point2->next;
//        }
//    }
//    if (point1==nullptr) {
//        p->next = point2;
//    }
//    else {
//        p->next = point1;
//    }
//
//    Node* head = result->next; // 跳过虚拟头节点
//    delete result; // 删除虚拟头节点
//    return head;
//}
//
//int main() {
//    Node* h1 = build_linked_list();
//    Node* h2 = build_linked_list();
//    Node* h = merge(h1, h2);
//    printlist(h);
//}