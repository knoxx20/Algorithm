//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int n;
//int MAP[21][21];
//int _min = 1000;
//
//void FindMin() {
//	vector<int> num(n);
//	vector<int> mask(n);
//	vector<int> start(n / 2);
//	vector<int> link(n / 2);
//
//	for (int i = 0; i < n; i++) {
//		num[i] = i + 1;
//	}
//	
//	for (int i = 0; i < n / 2; i++) {
//		mask[i] = 1;
//	}
//	for (int i = n / 2; i < n; i++) {
//		mask[i] = 0;
//	}
//
//	do {
//
//		int start_sum = 0;
//		int link_sum = 0;
//		start.clear();
//		link.clear();
//
//		for (int i = 0; i < n; i++) {
//			if (mask[i]) start.push_back(num[i]);
//			else link.push_back(num[i]);
//		}
//
//		for (int j = 0; j < n/2; j++) {
//			for (int k = 0; k < n/2; k++) {
//				start_sum += MAP[start[j]][start[k]];
//			}
//		}
//
//		for (int j = 0; j < n/2; j++) {
//			for (int k = 0; k < n/2; k++) {
//				link_sum += MAP[link[j]][link[k]];
//			}
//		}
//
//		int dis = abs(start_sum - link_sum);
//		if (dis < _min) _min = dis;
//
//	} while (prev_permutation(mask.begin(), mask.end()));
//}
//
//
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//
//	FindMin();
//
//	cout << _min; 
//
//	return 0;
//}