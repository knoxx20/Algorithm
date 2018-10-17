//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//int arr[10];
//int sum = 0;
//
//void search() {
//	for (int i = 0; i < 9; i++) {
//		for (int j = i + 1; j < 9; j++) {
//			if (sum - arr[i] - arr[j] == 100) {
//				arr[i] = 101;
//				arr[j] = 101;
//				return;
//			}
//		}
//	}
//}
//
//int main() {
//
//	for (int i = 0; i < 9; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//
//	search();
//	sort(arr, arr + 9);
//
//	for (int i = 0; i < 7; i++) printf("%d\n", arr[i]);
//
//	return 0;
//}