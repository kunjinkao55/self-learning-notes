//#include <iostream>
//using namespace std;
//int main() {
//	int m, n;
//	cin >> m >> n;
//	int** x = (int**)malloc(sizeof(int*) * (2*m+1)); //malloc(sizeof(int*) * m == x
//	for (int i = 0; i < 2*m+1; i++)
//	{
//		x[i] = (int*)malloc(sizeof(int) * (2*n+1));//x[i]也是一个指针
//	}
//
//	int i = 0;
//	int count = 1;
//	while(i<2*m+1)
//	{
//		int h = i, l = 0;
//		while (h >= 0&&l<n)
//		{
//			if (h < m && l < m)
//			{
//				x[h][l] = count++;
//			}
//			else x[h][l] = 0;
//			h--; l++;
//		}
//		i++;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i % 2 == 1)
//				swap(x[i][j], x[j][i]);
//			}
//	
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << x[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}