//#include <iostream>
//using namespace std;
//
//void strstr(char p[], char c[]) {
//	int cnt = 0;
//	int lp = strlen(p), lc = strlen(c);
//	int site=0;
//	while (site < lp-lc) {
//		int s_try = LeftHalfSearch(p, c[0]);
//		site = s_try;
//		bool flag = 1;
//		for (int i = 0; i < lc; i++)
//		{
//			if (p[s_try + i] != c[i])
//				flag = 0;
//			site++;
//		}
//		if (flag)
//		{
//			cout << "first: " << s_try << " last: " << s_try + lc;
//			break;
//		}
//	}
//	return;
//}