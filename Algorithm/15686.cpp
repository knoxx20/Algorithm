//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <tuple>
//
//using namespace std;
//
//int map[55][55];
//
//vector<tuple<int,int>> house;
//vector<tuple<int, int>> store;
//int n, m;
//int ans = -1;
//int _store = 0;
//int _house = 0;
//
//void Combinatorial() {
//
//	vector<int> open(store.size());
//
//	for (int i = 0; i < m; i++) {
//		open[i] = 1;
//	}
//
//	sort(open.begin(), open.end());
//
//	do {
//		int local = 0;
//		for (int i = 0; i < house.size(); i++) {
//			vector<int> dist;
//			int hx, hy;
//			tie(hx, hy) = house[i];
//			for (int j = 0; j < store.size(); j++) {
//				if (!open[j]) continue;
//				int sx, sy;
//				tie(sx, sy) = store[j];
//				int d = abs(hx - sx) + abs(hy - sy);
//				dist.push_back(d);
//			}
//			local += *min_element(dist.begin(), dist.end());
//		}
//
//		if (ans == -1 || ans > local) ans = local;
//
//	} while (next_permutation(open.begin(), open.end()));
//
//}
//
//
//int main() {
//	
//	scanf("%d %d", &n, &m);
//
//	//map 저장, 치킨 집 좌표 store에 저장
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			scanf("%1d", &map[i][j]);
//			if (map[i][j] == 2) store.emplace_back(i,j);
//			else if (map[i][j] == 1) {
//				house.emplace_back(i, j);
//			}
//		}
//	}
//
//	Combinatorial();
//
//	cout << ans;
//
//	return 0;
//}