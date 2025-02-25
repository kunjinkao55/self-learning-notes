//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//void reverse(char x[], int n) {
//	char temp;
//	for (int i = 0; i < n / 2; i++) {
//		temp = x[i];
//		x[i] = x[n - i - 1];
//		x[n - i - 1] = temp;
//	}
//}
//int main() {
//	char a[114] = { 0 }, b[114] = { 0 }; int a1[114] = { 0 }, b1[114] = { 0 }; int c[114] = { 0 };
//	int temp = 0;
//	cin >> a;
//	cin >> b;
//	int x = strlen(a);
//	int y = strlen(b);
//	reverse(a, x);
//	reverse(b, y);
//	for (int i = 0; i < x; i++)
//		if(a[i])
//			a1[i]=a[i] -48;
//	for (int i = 0; i < y; i++)
//		if(b[i])
//			b1[i] =b[i] - 48;
//	for (int j = 0; j < (x > y ? x : y)+1; j++)
//	{
//		c[j] = (a1[j] + b1[j] + temp) % 10;
//		temp = (a1[j] + b1[j]+temp) / 10;
//	}
//	if (temp != 0)
//		c[(x > y ? x : y)+1]=temp;
//	if (c[x > y ? x : y] != 0)
//		cout << c[x > y ? x : y];
//	for (int k = (x > y ? x : y)-1; k >= 0; k--)
//		cout << c[k];
//}
