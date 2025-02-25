//#include <iostream>
//#include <vector>
//using namespace std;
//
//int way(char p[][15], int m, int n, int x, int y) {
//    if (x == m-1 && y == n-1) {
//        return 1;
//    }
//    if (p[x][y] == '#'||x>=m||y>=n)
//        return 0;
//    return way(p, m, n, x + 1, y) + way(p, m, n, x, y + 1);
//}
//int main() {
//    int m;
//    int n;
//    cin >> m >> n;
//    char p[100][15];
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++)
//            cin >> p[i][j];
//    }
//    int x = 0, y = 0;
//    int ans = 0;
//    ans += way(p, m, n, 0, 0);
//    cout << ans;
//    return 0;
//}