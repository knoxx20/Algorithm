//#include <cstdio>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int MAP[26][26];
//int APT[26][26];
//int clusters[26*26];
//
//int r_dir[4] = {0, 1, 0, -1};
//int c_dir[4] = {1, 0, -1, 0};
//
//int n;
//
//void bfs(int i, int j, int num) {
//	queue<pair<int, int>> q;
//
//	q.push(make_pair(i, j));
//	APT[i][j] = num;
//
//	while (!q.empty()) {
//		pair<int, int> pos = q.front();
//		q.pop();
//
//		int r = pos.first;
//		int c = pos.second;
//
//		for (int k = 0; k < 4; k++) {
//			int rs = r + r_dir[k];
//			int cs = c + c_dir[k];
//
//			if ((0<= rs && rs <=n && 0<= cs && cs <= n) && MAP[rs][cs] && !APT[rs][cs]) {
//				APT[rs][cs] = num;
//				q.push(make_pair(rs, cs));
//			}
//		}
//	}
//}
//
//
//int main() {
//
//	int cluster = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%1d", &MAP[i][j]);
//
//	for (int r = 0; r < n; r++) {
//		for (int c = 0; c < n; c++) {
//			if (MAP[r][c] && !APT[r][c])
//				bfs(r, c, ++cluster);
//		}
//	}
//	
//	printf("%d\n", cluster);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			clusters[APT[i][j]] += 1;
//		}
//	}
//
//	sort(clusters + 1, clusters + cluster + 1);
//
//	for (int i = 1; i <= cluster; i++)
//		printf("%d\n", clusters[i]);
//
//	return 0;
//}