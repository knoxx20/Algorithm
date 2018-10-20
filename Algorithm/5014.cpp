//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//bool visited[1000001];
//queue<pair<int,int>> q;
//
//int btn[2] = { 1,-1 };
//int s, f, g;
//int ans = 10000001;
//
//void bfs() {
//	while (!q.empty()) {
//
//		pair<int,int> now = q.front();
//		int floor = now.first;
//		int cnt = now.second;
//		q.pop();
//
//		if (floor == g) {
//			if (cnt < ans) ans = cnt;
//		}
//
//		for (int i = 0; i < 2; i++) {
//			int next = floor + btn[i];
//
//			if (next < 1 || f < next || visited[next]) continue;
//			visited[next] = true;
//			q.push(make_pair(next,cnt+1));
//		}
//	}
//}
//
//
//int main() {
//	int u, d;
//	cin >> f >> s >> g >> u >> d;
//
//	btn[0] *= u;
//	btn[1] *= d;
//
//	memset(visited, false, f);
//	
//	q.push(make_pair(s,0));
//	visited[s] = true;
//	bfs();
//
//	if (!visited[g]) cout << "use the stairs";
//	else cout << ans;
//
//	return 0;
//}