//#include <iostream>
//using namespace std;
//
//void print(int** pp)
//{
//	int k,l;
//	cin >> k >>l;
//	cout << pp[k][l];
//}
//
//int main()
//{
//	/*int a = 0, b = 1;
//	int* p = &a, * q = &b;
//	cout << &a << ' ' << &b << endl;
//	cout << p << ' ' << q<<endl;
//	cout << &p << ' ' << &q << endl;
//	cout << *p << ' ' << *q<<endl;
//	cout << a << b << endl;
//
//	std::swap(p, q);
//	cout << &a << ' ' << &b << endl;
//	cout << p << ' ' << q << endl;
//	cout << &p << ' ' << &q << endl;
//	cout << *p << ' ' << *q << endl;
//	cout << a << b << endl;*/
//
//	//使用指针实现动态二维数组
//	int n;
//	cin >> n;
//	int** pp = new int*[n];
//	for (int i = 0; i < n; i++)
//	{
//		int m;
//		cin >> m;
//		pp[i] = new int[m];
//		for (int j = 0; j < m; j++)
//		{
//			cin >> pp[i][j];
//		}
//	}
//	//数学方式用一维数组模拟二位数组
//	int o;
//	cin >> o;
//	int* math = new int [o * n];
//	//访问
//	int cnt = 1, cntt = 3;
//	cin >> math[o * cnt + cntt];
//}