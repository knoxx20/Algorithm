//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//
//#define MAX 100000
//
//using namespace std;
//
//bool visited[MAX];
//queue<pair<int, int>> q;
//vector<int> dist;
//
//int ans_cnt;
//int pos1, pos2;
//
//int ans = MAX + 1;
//
//void bfs() {
//
//	while (!q.empty()) {
//
//		pair<int, int> info = q.front();
//
//		int x = info.first;
//		int cnt = info.second;
//
//		q.pop();
//
//		if (x == pos2) {
//			visited[pos2] = false; // 재방문 할 수 있도록
//			dist.push_back(cnt);
//		}
//
//		if (0< 2*x && 2 * x <= MAX && !visited[2 * x]) {
//			visited[2 * x] = true;
//			q.push(make_pair(2 * x, cnt + 1));
//		}
//
//		if (0 <= x - 1 && !visited[x - 1]) {
//			visited[x - 1] = true;
//			q.push(make_pair(x - 1, cnt + 1));
//		}
//		if (x + 1 <= MAX && !visited[x + 1]) {
//			visited[x + 1] = true;
//			q.push(make_pair(x + 1, cnt + 1));
//		}
//	}
//}
//
//
//int main() {
//
//	cin >> pos1 >> pos2;
//
//	memset(visited, false, sizeof(visited));
//
//	q.push(make_pair(pos1, 0));
//	visited[pos1] = true;
//
//	bfs();
//
//	sort(dist.begin(), dist.end());
//	for (int i = 0; i < dist.size(); i++) {
//		int ans_cnt = 0;
//		ans = dist[0];
//		if (dist[i] != ans) break;
//		ans_cnt++;
//	}
//
//	cout << ans << "\n" << ans_cnt;
//
//	return 0;
//}