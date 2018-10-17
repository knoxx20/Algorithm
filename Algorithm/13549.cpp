//#include <iostream>
//#include <queue>
//#include <cstring>
//
//#define MAX 100000
//
//using namespace std;
//
//bool visited[MAX];
//queue<pair<int, int>> q;
//
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
//			if (cnt < ans) {
//				ans = cnt;
//			}
//		}
//
//		if (2 * x <= MAX && !visited[2 * x]) {
//			visited[2 * x] = true;
//			q.push(make_pair(2 * x, cnt));
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
//		
//	}
//
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
//	cout << ans << "\n";
//
//	return 0;
//}