//#include <stdio.h>
//
//typedef struct COORD {
//	int x;
//	int y;
//}coord;
//
//coord coords[100005];
//coord tmp[100005];
//
//int cmp(coord c1, coord c2) {
//	if (c1.x < c2.x) {
//		return 1;
//	}
//	else if (c1.x == c2.x) {
//		return c1.y < c2.y;
//	}
//	else return 0;
//}
//
//
//void merge(int start, int end) {
//	int i = start;
//	int mid = (start + end) / 2;
//	int j = mid + 1;
//	int k = 0;
//
//	while (i <= mid && j <= end) {
//		if (cmp(coords[i],coords[j])) {
//			tmp[k].x = coords[i].x;
//			tmp[k++].y = coords[i++].y;
//		}
//		else {
//			tmp[k].x = coords[j].x;
//			tmp[k++].y = coords[j++].y;
//		}
//	}
//
//	while (i <= mid) {
//		tmp[k].x = coords[i].x;
//		tmp[k++].y = coords[i++].y;
//	}
//
//	while (j <= end) {
//		tmp[k].x = coords[j].x;
//		tmp[k++].y = coords[j++].y;
//	}
//
//	for (i = start; i <= end; i++) {
//		coords[i].x = tmp[i - start].x;
//		coords[i].y = tmp[i - start].y;
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
//	int n, i;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d %d", &coords[i].x, &coords[i].y);
//	}
//
//	sort(0, n - 1);
//
//	for (i = 0; i < n; i++) {
//		printf("%d %d\n", coords[i].x, coords[i].y);
//	}
//
//	return 0;
//}