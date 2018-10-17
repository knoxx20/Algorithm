//#include <cstdio>
//
//using namespace std;
//
//int cnt[10001];
//
//int main() {
//
//	int n;
//	int val;
//	int max = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &val);
//		cnt[val] += 1;
//		if (max < val) max = val;
//	}
//
//	for (int i = 1; i<= max; i++) {
//		while (0 < cnt[i]--) {
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}