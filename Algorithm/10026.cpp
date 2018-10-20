//#include <iostream>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//int dx[4] = {-1,  0, 1, 0};
//int dy[4] = { 0, -1, 0, 1};
//char MAP[101][101];
//int visited[101][101];
//
//queue<int> q;
//
//int n;
//int cnt = 0;
//int rg = 0;
//
//void bfs(int coord, int cnt) {
//	q.push(coord);
//	char color = MAP[coord/100][coord%100];
//
//	while (!q.empty()) {
//		int xy = q.front();
//
//		int x = xy / 100;
//		int y = xy % 100;
//		
//		q.pop();
//
//		for (int d = 0; d < 4; d++) {
//			int ix = x + dx[d];
//			int iy = y + dy[d];
//
//			if (ix < 0 || n <= ix || iy < 0 || n <= iy || visited[ix][iy] || MAP[ix][iy] != color) continue;
//
//			q.push(ix * 100 + iy);
//			visited[ix][iy] = cnt;
//		}
//	}
//}
//
//int main() {
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (!visited[i][j]) {
//				cnt += 1;
//				visited[i][j] = cnt;
//				bfs(100 * i + j, cnt);
//			}
//		}
//	}
//
//	memset(visited, 0, sizeof(visited));
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if( MAP[i][j] == 'G') MAP[i][j] = 'R';
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (!visited[i][j]) {
//				rg += 1;
//				visited[i][j] = rg;
//				bfs(100 * i + j, rg);
//			}
//		}
//	}
//
//	cout << cnt << ' ' << rg;
//
//	return 0;
//}