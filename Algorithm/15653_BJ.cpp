//#include <iostream>
//#include <queue>
//#include <tuple>
//#include <cstring>
//
//
//using namespace std;
//
//char MAP[11][11];
//bool visited[10][10][10][10];
//queue<tuple<int, int, int, int>> q;
//int n, m;
//int rx, ry, bx, by, hx, hy;
//
//
//int dx[4] = { -1,  0, 1, 0 };
//int dy[4] = { 0, -1, 0, 1 };
//
//void bfs() {
//	int _rx, _ry, _bx, _by;
//	while (!q.empty()) {
//
//		tie(_rx, _ry, _bx, _by) = q.front();
//
//		MAP[_rx][_ry] = 'R';
//		MAP[_bx][_by] = 'B';
//
//		for (int d = 0; d < 4; d++) {
//			
//
//		}
//		
//
//	}
//
//}
//
//
//
//int main(){
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> MAP[i][j];
//
//			if (MAP[i][j] == 'O') {
//				hx = i, hy = j;
//			}
//
//			if (MAP[i][j] == 'R') {
//				rx = i, ry = j;
//				MAP[i][j] == '.';
//			}
//			if (MAP[i][j] == 'B') {
//				bx = i, by = j;
//				MAP[i][j] = '.';
//			}
//		}
//	}
//
//	memset(visited,false,sizeof(visited));
//	q.emplace(rx, ry, bx, by);
//
//	bfs();
//
//	return 0;
//}
