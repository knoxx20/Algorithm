//#include <cstdio>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//vector<int> MAP[1002];
//bool visited[1002];
//
//void dfs(int node) {
//	
//	visited[node] = true;
//
//	int next = MAP[node][0];
//	if (!visited[next]) dfs(next);
//	else return;
//}
//
//
//int main() {
//
//	int t, n, val;
//
//	scanf("%d", &t);
//	
//	for (int i = 0; i < t; i++) {
//		int cnt = 0;
//		scanf("%d", &n);
//		memset(visited, false, 1002);
//		for (int j = 1; j <= n; j++) MAP[j].clear();
//		
//		for (int j = 1; j <= n; j++) {
//			scanf("%d", &val);
//			MAP[j].push_back(val);
//		}
//		for (int j = 1; j <= n; j++) {
//			if (!visited[j]) {
//				dfs(j);
//				cnt++;
//			}
//		}
//
//		printf("%d\n", cnt);
//
//	}
//
//	return 0;
//}