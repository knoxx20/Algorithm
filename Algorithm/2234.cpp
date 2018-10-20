//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//int MAP[51][51];
//int Num[51][51];
//int Cnt[51 * 51];
//
//queue<int> q;
//bool visited[51][51];
//
//int dx[4] = { 1, 0, -1,  0 };
//int dy[4] = { 0, 1,  0, -1 };
//
//int ans1 = 0;
//int ans2 = 0;
//int ans3 = 0;
//
//int* bitmask(int num) {
//	int *bits = new int[4];
//
//	int i = 3;
//
//	while (num > 0) {
//		int bit = num % 2;
//		num /= 2;
//		bits[i--] = bit;
//	}
//
//	while (0 <= i) {
//		bits[i--] = 0;
//	}
//
//	return bits;
//}
//
//void bfs(int cnt) {
//
//	while (!q.empty()) {
//
//		int xy = q.front();
//		q.pop();
//
//		int x = xy / 100;
//		int y = xy % 100;
//
//		Num[x][y] = cnt;
//		Cnt[cnt]++;
//
//		int *bits = bitmask(MAP[x][y]);
//
//		for (int d = 0; d < 4; d++) {
//			if (bits[d]) continue;
//			int ix = x + dx[d];
//			int iy = y + dy[d];
//
//			if (visited[ix][iy]) continue;
//
//			visited[ix][iy] = true;
//			q.push(ix * 100 + iy);
//
//		}
//	}
//	
//}
//
//void remove(int x, int y) {
//	int cur = Num[x][y];
//	for (int d = 0; d < 4; d++) {
//		int sum = 0;
//		int ix = x + dx[d];
//		int iy = y + dy[d];
//
//		if (Num[ix][iy] == cur) continue;
//		
//		sum = Cnt[cur] + Cnt[Num[ix][iy]];
//		if (sum > ans3) ans3 = sum;
//	}
//}
//
//int main() {
//	
//	int n, m;
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (!visited[i][j]) {
//				ans1 += 1;
//				visited[i][j] = true;
//				q.push(i * 100 + j);
//				bfs(ans1);
//			}
//		}
//	}
//
//	memset(visited, false, sizeof(visited));
//
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (!visited[i][j]) {
//				visited[i][j] = true;
//				remove(i, j);
//			}
//		}
//	}
//
//	ans2 = *max_element(Cnt, Cnt + (n*n));
//	
//	cout << ans1 << endl << ans2 << endl << ans3;
//
//	return 0;
//}