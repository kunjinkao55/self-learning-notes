//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void insert(char a[],int n , char x, int site)
//{
//	char temp=a[site];
//	a[site] = x;
//	char t = a[site+1];
//	for (int i = site + 1; i <= n ; i++)
//	{
//	    
//		a[i] = temp;
//		temp = t;
//		t = a[i + 1];
//		
//	}
//	return;
//}
//
//void dele(char a[], int n,int site)
//{
//
//	for (int i = site; i < n; i++)
//	{
//		a[i] = a[i+1];
//	}
//
//	return;
//}
//
//char x[11];
//char store[11];
//
//void sort(int start, int end,int lengt) {
//	if (start == end ) {
//		cout << x<<endl;
//	}
//	else {
//		for (int i = start; i < end; i++)
//		{
//			for (int j = start; j < i; j++)
//				swap(x[i], x[j]);
//			sort(start + 1, end,lengt);
//			for (int j = start; j < i; j++)
//				swap(x[j+1], x[j]);
//		}
//	}
//}
//
//int main()
//{
//
//	cin >> x;
//	const int leng = strlen(x);
//	sort(0, leng,leng);
//	return 0;
//}