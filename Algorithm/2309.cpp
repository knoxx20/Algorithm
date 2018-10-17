//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> set[100];
//int arr[10];
//int index = 0;
//
//void search() {
//
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			if (j == i) continue;
//
//			int sum = 0;
//			for (int k = 0; k < 9; k++) {
//				if (k == i || k == j) continue;
//				set[index].push_back(arr[k]);
//				sum += arr[k];
//			}
//
//			if (sum == 100) return;
//
//			index++;
//		}
//	}
//}
//
//int main() {
//
//
//	for (int i = 0; i < 9; i++) {
//		scanf("%d", &arr[i]);
//	}
//	
//	search();
//	sort(set[index].begin(), set[index].end());
//	
//	for (int k = 0; k < 7; k++) {
//		printf("%d\n", set[index][k]);
//	}
//
//	return 0;
//}