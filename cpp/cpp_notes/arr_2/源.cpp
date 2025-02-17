#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int* x_i_name = new int[N+2];
	int* x_i_addr = new int[N + 2];
	for (int x = 1; x <= N + 1; x++)
		x_i_addr[x] = 0;
	for (int i = 1; i <= N; i++) {
		x_i_name[i] = i;
		cin >> x_i_addr[i];
        //第0个数没人可以插❤/(ㄒoㄒ)/~~
		if (x_i_addr[i] == 0)
		{
			for (int t = 1; t < i; t++)
				x_i_addr[t] += 1;
		}
		else {
			for (int k = 1; k < i; k++)
				{
                    if( x_i_name[k]==x_i_addr[i]){
                    for(int p =(x_i_addr[k]+1);p<i;p++)
                    {
                        if (x_i_addr[p]>x_i_addr[i]&&x_i_name[p]!=x_i_name[i])
                        x_i_addr[p]+=1;
                    }
                    x_i_addr[i]=x_i_addr[k]+1;
                    break;
                    }
                }
		}
	}
	for (int p = 0; p < N; p++)
	{
		for (int q = 1; q <= N; q++)
			if (x_i_addr[q] == p) {
				cout << x_i_name[q];
			}
	}
}