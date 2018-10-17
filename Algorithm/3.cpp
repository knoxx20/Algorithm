//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//vector<int> solution(vector<int> healths, vector<vector<int>> items) {
//	vector<int> answer;
//	bool visited[5002];
//
//	memset(visited, 5002, 0);
//
//	for (int i = 1; i <= items.size(); i++) {
//		items[i - 1].push_back(i);
//	}
//
//	sort(items.begin(), items.end(), 
//		[](const std::vector<int> &a, const std::vector<int> &b) {
//		if (a[0] == b[0]) return a[1] <= b[1];
//		else return a[0] > b[0];
//	});
//
//
//	sort(healths.begin(), healths.end());
//	
//	int h_size = healths.size();
//	int i_size = items.size();
//
//	int index = 0;
//
//	for (int i = 0; i < h_size; i++) {
//		for (int j = 0; j < i_size; j++) {
//			if (!visited[j] && healths[i] - items[j][1] >= 100) {
//				answer.push_back(items[j][2]);
//				visited[j] = true;
//				break;
//			}
//		}
//	}
//
//	sort(answer.begin(), answer.end());
//
//
//	return answer;
//}
//
//
//
//
//int main() {
//	vector<vector<int>> items;
//	int size;
//
//	scanf("%d", &size);
//
//	
//	for (int i = 0; i < size; i++) {
//		vector<int> tmp;
//		int x;
//		int y;
//		tmp.clear();
//		scanf("%d %d", &x, &y);
//		tmp.push_back(x);
//		tmp.push_back(y);
//
//		items.push_back(tmp);
//	}
//
//	solution(items);
//
//
//
//
//	return 0;
//}