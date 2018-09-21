//#include <stdio.h>
//
//int num[1000005];
//int result[1000005]; // merge
//
//
//void merge(int start, int end) {
//	
//	int i = start;
//	int mid = (start + end) / 2;
//	int j = mid + 1;
//	int k = 0;
//
//	while (i <= mid && j <= end) {
//		if (num[i] <= num[j]) result[k++] = num[i++];
//		else result[k++] = num[j++];
//	}
//
//	while (i <= mid) {
//		result[k++] = num[i++];
//	}
//
//	while (j <= end) {
//		result[k++] = num[j++];
//	}
//
//	for (i = start; i <= end; i++) {
//		num[i] = result[i-start];
//	}
//
//}
//
//void sort(int start, int end) {
//	if (start == end) return;
//
//	int mid = (start + end) / 2;
//	sort(start, mid);
//	sort(mid + 1, end);
//	merge(start, end);
//}
//
//
//int main() {
//
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	sort(0, n-1);
//
//
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", num[i]);
//	}
//
//
//	return 0;
//}