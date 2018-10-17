//#include <cstdio>
//
//using namespace std;
//
//char MAP[11][11];
//bool visited[10][10];
//
//int n, m;
//int x, y;
//int r = -1, b = -1;
//int ans = -1;
//
//int dx[4] = { -1,  0, 1, 0 };
//int dy[4] = { 0, -1, 0, 1 };
//
//void dfs(int x, int y, int dir, int cnt) {
//
//	visited[x][y] = true;
//
//	if (MAP[x][y] == 'R') {
//		r = cnt;
//		return;
//	}
//
//	if (MAP[x][y] == 'B') {
//		b = cnt;
//		return;
//	}
//
//	for (int d = 0; d < 4; d++) {
//		int ix = x + dx[d];
//		int iy = y + dy[d];
//
//		if (ix < 0 || ix >= n || iy < 0 || iy >= m || MAP[ix][iy] == '#') return;
//
//		if (d != dir) {
//			dfs(ix, iy, d, cnt + 1);
//		}
//		else dfs(ix, iy, d, cnt);
//	}
//
//	visited[x][y] = false;
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
//			scanf("%c", &MAP[i][j]);
//			if (MAP[i][j] == 'O') {
//				x = i, y = j;
//			}
//		}
//	}
//
//	dfs(x,y,-1,0);
//
//	if (r != -1 && r < b) ans = r;
//	else ans;
//
//	printf("%d", ans);
//
//	return 0;
//}