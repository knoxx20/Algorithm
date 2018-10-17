//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//char MAP[15][15];
//bool visited[1015];
//queue <pair<int,int>> q;
//
//int n, m;
//int x, y;
//int r = -1, b = -1;
//int ans = -1;
//
//int dx[4] = { -1,  0, 1, 0 };
//int dy[4] = { 0, -1, 0, 1 };
//
//int bfs() {
//
//	while (!q.empty()) {
//		pair<int, int> node = q.front();
//		int pos = node.first;
//
//		int x = pos / 100;
//		int y = pos % 100;
//
//		visited[pos] = true;
//
//		int info = node.second;
//
//		int cnt = info / 10;
//		int dir = info % 10;
//
//		q.pop();
//
//		if (MAP[x][y] == 'R') {
//			return cnt;
//		}
//
//		else if (MAP[x][y] == 'B') {
//			return -1;
//		}
//
//		for (int d = 0; d < 4; d++) {
//			int ix = x + dx[d];
//			int iy = y + dy[d];
//			int coord = ix * 100 + iy;
//
//			if (ix < 0 || ix >= n || iy < 0 || iy >= m || MAP[ix][iy] == '#' || visited[coord]) continue;
//
//			if (d != dir) {
//				q.push(make_pair(coord, (cnt+1)*10 + d));
//				visited[coord] = true;
//			}
//			else {
//				int coord = ix * 100 + iy;
//				q.push(make_pair(coord, cnt * 10 + d));
//				visited[coord] = true;
//			}
//		}
//	}
//
//	return -1;
//}
//
//
//int main() {
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> MAP[i][j];
//			
//			if (MAP[i][j] == 'O') {
//				x = i, y = j;
//				q.push(make_pair(100 * i + j, 4));
//			}
//		}
//	}
//
//	ans = bfs();
//
//	cout << ans;
//
//	return 0;
//}