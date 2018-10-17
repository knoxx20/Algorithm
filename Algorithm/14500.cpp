//#include <cstdio>
//#include <vector>
//
//using namespace std;
//
//int  map[501][501];
//bool visited[501][501];
//
//int n, m;
//int ans = 0;
//
//int dx[4] = {-1,  0, 1, 0};
//int dy[4] = { 0, -1, 0, 1};
//
//
//void search(int x, int y, int sum, int cnt) {
//
//	if (cnt >= 4) {
//		if (ans < sum) ans = sum;
//		return;
//	}
//
//	if (x < 0 || x >= n || y < 0 || y >= m) return;
//	if (visited[x][y]) return;
//
//	visited[x][y] = true;
//
//	for (int d = 0; d < 4; d++) {
//		search(x + dx[d], y + dy[d], sum + map[x][y], cnt + 1);
//	}
//
//	visited[x][y] = false;
//}
//
//void T(int x, int y) {
//
//	if (x + 2 < n && y - 1 >= 0) {
//		int sum = map[x][y] + map[x + 1][y] + map[x + 2][y] + map[x + 1][y - 1];
//		if (ans < sum) ans = sum;
//	}
//	
//	if (x + 2 < n && y + 1 < m) {
//		int sum = map[x][y] + map[x + 1][y] + map[x + 2][y] + map[x + 1][y + 1];
//		if (ans < sum) ans = sum;
//	}
//
//	if (0 <= x - 1 && y + 2 < m) {
//		int sum = map[x][y] + map[x][y + 1] + map[x][y + 2] + map[x - 1][y + 1];
//		if (ans < sum) ans = sum;
//	}
//
//	if (x + 1 < n && y + 2 < m) {
//		int sum = map[x][y] + map[x][y + 1] + map[x][y + 2] + map[x + 1][y + 1];
//		if (ans < sum) ans = sum;
//	}
//
//}
//
//
//int main() {
//
//	scanf("%d %d", &n, &m);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			search(i, j, 0, 0);
//			T(i, j);
//		}
//	}
//
//	printf("%d", ans);
//
//	return 0;
//}