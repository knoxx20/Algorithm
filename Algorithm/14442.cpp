//#include <iostream>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//
//int visited[1001][1001][11];
//queue <tuple<int,int> > q;
//char MAP[1001][1001];
//
//int dx[4] = {-1,  0, 1, 0};
//int dy[4] = { 0, -1, 0, 1};
//
//int n, m, k;
//
//void bfs() {
//	
//	q.emplace(1001, 0);
//	visited[1][1][0] = 1;
//
//	while (!q.empty()) {
//
//		int xy, wall; // wall 은 부순 벽의 수.
//		tie(xy, wall) = q.front();
//		q.pop();
//
//		int x = xy / 1000;
//		int y = xy % 1000;
//
//		for (int d = 0; d < 4; d++) {
//			int ix = x + dx[d];
//			int iy = y + dy[d];
//
//			if (ix < 1 || n < ix || iy < 1 || m < iy) continue;
//
//			if (MAP[ix][iy] == '1' && wall + 1 <= k && !visited[ix][iy][wall+1]) {
//				visited[ix][iy][wall + 1] = visited[x][y][wall] + 1;
//				q.emplace(ix * 1000 + iy, wall+1);
//			}
//
//			if (MAP[ix][iy] == '0' && !visited[ix][iy][wall]) {
//				visited[ix][iy][wall] = visited[x][y][wall] + 1;
//				q.emplace(ix * 1000 + iy, wall);
//			}
//		}
//	}
//
//}
//
//
//int main() {
//
//	cin >> n >> m >> k;
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//
//	bfs();
//
//	int ans = -1;
//	for (int i = 0; i <= k; i++) {
//		if (!visited[n][m][i]) continue;
//		if (ans == -1) ans = visited[n][m][i];
//		else if (visited[n][m][i] < ans) ans = visited[n][m][i];
//	}
//
//	cout << ans;
//
//	return 0;
//}