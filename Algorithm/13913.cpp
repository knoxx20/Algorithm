//#include <iostream>
//#include <queue>
//#include <vector>
//#include <stack>
//#include <cstring>
//
//#define max 200000
//
//using namespace std;
//
//int trace[max];
//queue<pair<int,int>> q;
//
//int pos1, pos2;
//int ans = max + 1;
//
//void search(int pos) {
//
//	int _trace = trace[pos];
//	
//	if (pos == pos1) {
//		cout << pos << " ";
//		return;
//	}
//
//	search(_trace);
//	cout << pos << " ";
//
//}
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
//			if (cnt < ans) ans = cnt;
//		}
//
//		if (0 < 2 * x && 2 * x <= max && trace[2 * x] == -1) {
//			q.push(make_pair(2 * x, cnt + 1));
//			trace[2 * x] = x;
//		}
//		if (0 <= x - 1 && trace[x - 1] == -1) {
//			q.push(make_pair(x - 1, cnt + 1));
//			trace[x - 1] = x;
//		}
//		if (x + 1 <= max && trace[x + 1] == -1) {
//			q.push(make_pair(x + 1, cnt + 1));
//			trace[x + 1] = x;
//		}
//	}
//}
//
//int main() {
//
//	cin >> pos1 >> pos2;
//
//	memset(trace, -1, sizeof(trace));
//
//	q.push(make_pair(pos1,0));
//	bfs();
//
//	cout << ans << "\n";
//
//	search(pos2);
//
//	return 0;
//}