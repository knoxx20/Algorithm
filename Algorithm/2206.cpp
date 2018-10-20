//#include <iostream>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//
//queue<tuple<int,int>> q;
//int MAP[1001][1001];
//int visited[1001][1001][2];
//
//int dx[4] = { -1,  0, 1,  0 };
//int dy[4] = { 0,  -1, 0 , 1 };
//
//int n, m;
//
//void bfs() {
//
//	q.emplace(1001, 0);
//
//	visited[1][1][0] = 1;
//
//	while (!q.empty()) {
//		int xy, wall;
//		tie(xy, wall) = q.front(); q.pop();
//
//		int x = xy / 1000;
//		int y = xy % 1000;
//
//		for (int i = 0; i < 4; i++) {
//			int ix = x + dx[i];
//			int iy = y + dy[i];
//
//			if (ix < 1 || n < ix || iy < 1 || m < iy) continue;
//
//			if (MAP[ix][iy] && !visited[ix][iy][wall + 1] && wall + 1 <= 1) {
//				q.emplace(ix * 1000 + iy, wall + 1);
//				visited[ix][iy][wall + 1] = visited[x][y][wall] + 1;
//			}
//
//			if (!MAP[ix][iy] && !visited[ix][iy][wall]) {
//				q.emplace(ix * 1000 + iy, wall);
//				visited[ix][iy][wall] = visited[x][y][wall] + 1;
//			}
//		}
//	}
//
//}
//
//int main() {
//
//	scanf("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf("%1d", &MAP[i][j]);
//		}
//	}
//
//	bfs();
//
//	int ans = -1;
//	for (int i = 0; i < 2; i++) {
//		if (!visited[n][m][i]) continue;
//		if (ans == -1) ans = visited[n][m][i];
//		else if (visited[n][m][i] < ans) ans = visited[n][m][i];
//	}
//
//	printf("%d", ans);
//
//	return 0;
//}