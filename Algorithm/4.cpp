//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//
//vector<int> solution(int N, vector<vector<int>> directory, vector<vector<int>> query) {
//	vector<int> answer;
//	vector<int> linked[100005];
//	
//	int dir = directory.size();
//
//	for (int i = 0; i < dir; i++) {
//		int v1 = directory[i][0];
//		int v2 = directory[i][1];
//		linked[v1].push_back(v2);
//		linked[v2].push_back(v1);
//	}
//
//	int q_size = query.size();
//	for (int i = 0; i < q_size; i++) {
//		vector<int> visited(N + 1);
//		queue<int> q;
//		int cnt = 0;
//		int start = query[i][0];
//		int end = query[i][1];
//
//		q.push(start);
//		cnt++;
//		visited[start] = 1;
//		
//		while (!q.empty()) {
//			int node = q.front();
//			q.pop();
//			if (node == end) {
//				answer.push_back(visited[node]);
//				break;
//			}
//		
//			for (int j = 0; j < linked[node].size(); j++) {
//				int next = linked[node][j];
//				if (visited[next] == 0) {
//					q.push(next);
//					visited[next] = visited[node]+1;
//				}
//			}
//		}
//	}
//	return answer;
//}