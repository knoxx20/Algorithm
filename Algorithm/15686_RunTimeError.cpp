//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int map[55][55];
//int store[15];
//int house[110];
//bool closed[15];
//int n, m;
//
//int _store = 0;
//int _house = 0;
//int ans = 101;
//
//
//int search() {
//	int local = 0;
//
//	for (int i = 0; i < _house; i++) {
//		int hdist = 101;
//		int hx = house[i] / 100;
//		int hy = house[i] % 100;
//
//		for (int j = 0; j < _store; j++) {
//			if (closed[j]) continue;
//			int sx = store[j] / 100;
//			int sy = store[j] % 100;
//			int dist = abs(hx - sx) + abs(hy - sy);
//			if (dist < hdist) hdist = dist;
//		}
//
//		local += hdist;
//		if (ans < local) return ans;
//		// ���� ans ���� local ���� Ŀ���� ans ���ȯ�ϰ� Ž�� ����.
//	}
//	return local;
//}
//
//
//void BruteForce(int max, int close) {
//
//	if (max == close) {
//		//print();
//		int sum = search();
//		if (sum < ans) ans = sum;
//		return;
//	}
//
//	for (int i = 0; i < _store; i++) {
//		if (closed[i]) continue;
//		int x = store[i] / 100;
//		int y = store[i] % 100;
//		closed[i] = true;
//		map[x][y] = 0;
//		BruteForce(max, close + 1);
//		map[x][y] = 2;
//		closed[i] = false;
//	}
//
//}
//
//
//int main() {
//
//	scanf("%d %d", &n, &m);
//
//	//map ����, ġŲ �� ��ǥ store�� ����
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			scanf("%1d", &map[i][j]);
//			if (map[i][j] == 2) store[_store++] = i * 100 + j;
//			else if (map[i][j] == 1) house[_house++] = i * 100 + j;
//		}
//	}
//
//	//�ִ� ��� ���� �� _store - m�� ���� Ž��
//	for (int i = _store - m; 0 < _store - i; i++) {
//		BruteForce(i, 0);
//	}
//
//	cout << ans;
//
//	return 0;
//}