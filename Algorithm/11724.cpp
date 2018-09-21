//#include <cstdio>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//vector<int> MAP[1001];
//bool visited[1001];
//
//void dfs(int node) {
//	visited[node] = true;
//	for (int i = 0; i < MAP[node].size(); i++) {
//		int next = MAP[node][i];
//		if (!visited[next]) dfs(next);
//	}
//}
//
//int main() {
//
//	int n, m, u, v;
//	int cc = 0;
//
//	scanf("%d %d", &n, &m);
//	
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &u, &v);
//		MAP[u].push_back(v);
//		MAP[v].push_back(u);
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (!visited[i]) {
//			dfs(i);
//			cc++;
//		}
//	}
//
//	printf("%d", cc);
//
//	return 0;
//}
