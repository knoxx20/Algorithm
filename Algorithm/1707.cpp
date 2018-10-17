//#include <cstdio>
//#include <vector>
//#include <cstring>
//#include <queue>
//
//using namespace std;
//
//
//vector<int> MAP[20002]; // MAP √ ±‚»≠!
//bool visited[20002];
//bool color[20002];
//
//
//int bfs(int node) {
//	queue<int> q;
//	memset(visited, false, sizeof(visited));
//	visited[node] = true;
//	q.push(node);
//
//	while (!q.empty()) {
//		int v = q.front();
//		q.pop();
//
//		for (int i = 0; i < MAP[v].size(); i++) {
//			int next = MAP[v][i];
//			if (!visited[next]) {
//				visited[next] = true;
//				color[next] = !color[v];
//				q.push(next);
//			}
//			else if (visited[next] && color[v] == color[next]) {
//				return 0;
//			}
//		}
//	}
//
//	return 1;
//}
//
//int main() {
//
//	int k;
//	
//	scanf("%d", &k);
//
//	int v, e;
//
//	for (int i = 0; i < k; i++) {
//		int result = 1;
//		int cc = 0;
//		scanf("%d %d", &v, &e);
//		for (int j = 0; j < v; j++) MAP[j].clear();
//		memset(visited, false,v);
//		memset(color, false, v);
//		for (int j = 0; j < e; j++) {
//			int v1, v2;
//			scanf("%d %d", &v1, &v2);
//			MAP[v1].push_back(v2);
//			MAP[v2].push_back(v1);
//		}
//
//		for (int k = 1; k <= v; k++) {
//			if (!visited[k]) {
//				result *= bfs(k);
//			}
//		}
//
//		if (result) printf("YES\n");
//		else printf("NO\n");
//	}
//
//	return 0;
//}