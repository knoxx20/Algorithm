///*
//	cpp에 익숙해지는 훈련.
//	memset은 cstring 라이브러리에 있음. 
//	인접 리스트 사용에 익숙해질 것. vector를 이용하면 된다. 
//
//	입력 받은 간선들을 정점 순번이 낮은 순으로 정렬해야한다. 
//	인접 리스트 sort는 sort(MAP[i].begin(), MAP[i].end())를 수행하면 된다.
//	
//*/
//
//
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//vector<int> MAP[1002];
//queue<int> q;
//bool visited[1002];
//
//int n, m;
//
//void dfs(int node) {
//	visited[node] = true;
//	printf("%d ", node);
//	for (int i = 0; i < MAP[node].size(); i++) {
//		int next = MAP[node][i];
//		if (visited[next] == false) dfs(next);
//	}
//}
//
//void bfs(int node) {
//	memset(visited, false, sizeof(visited));
//	visited[node] = true;
//	q.push(node);
//
//	while (!q.empty()) {
//		int v = q.front();
//		q.pop();
//		printf("%d ", v);
//
//		for (int i = 0; i < MAP[v].size(); i++) {
//			int next = MAP[v][i];
//			if (visited[next] == false) {
//				visited[next] = true;
//				q.push(next);
//			}
//		}
//	}
//
//}
//
//int main() {
//	int v, v1, v2;
//
//	scanf("%d %d %d", &n, &m, &v);
//
//	for (int i = 1; i <= m; i++) {
//		scanf("%d %d", &v1, &v2);
//		MAP[v1].push_back(v2);
//		MAP[v2].push_back(v1);
//	}
//
//	for (int i = 1; i <= n; i++) {
//		sort(MAP[i].begin(), MAP[i].end());
//	}
//
//	dfs(v);
//	printf("\n");
//	bfs(v);
//
//	return 0;
//}