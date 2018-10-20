//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//char MAP[251][251];
//bool visited[251][251];
//
//int n, m;
//int lamb = 0, wolf = 0;
//
//queue<int> q;
//
//int dx[4] = {-1,  0, 1, 0};
//int dy[4] = { 0, -1, 0, 1};
//
//void bfs() {
//	int localL = 0, localW = 0;
//	while (!q.empty()) {
//		int xy = q.front();
//		q.pop();
//
//		int x = xy / 1000;
//		int y = xy % 1000;
//
//		for (int d = 0; d < 4; d++) {
//			int ix = x + dx[d];
//			int iy = y + dy[d];
//
//			if (ix < 0 || n <= ix || iy < 0 || m <= iy || visited[ix][iy] || MAP[ix][iy] == '#') continue;
//
//			if (MAP[ix][iy] == 'o') localL++;
//			if (MAP[ix][iy] == 'v') localW++;
//
//			visited[ix][iy] = true;
//			q.push(ix * 1000 + iy);
//		}
//	}
//
//	if (localL >  localW) lamb += localL;
//	if (localW >= localL) wolf += localW;
//}
//
//int main() {
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (!visited[i][j]) {
//				visited[i][j] = true;
//				q.push(i * 1000 + j);
//				bfs();
//			}
//		}
//	}
//
//	cout << lamb << ' ' << wolf;
//
//	return 0;
//}