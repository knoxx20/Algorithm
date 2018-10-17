//#include <cstdio>
//
//using namespace std;
//
//int main() {
//	int ans;
//	int N;
//
//	scanf("%d", &N);
//
//	if (N < 100) ans = N;
//	else ans = 99;
//
//	for (int i = 100; i <= N; i++) {
//		int num = i;
//		
//		if (num / 100 - num / 10 % 10 == num / 10 % 10 - num % 10) ans++;
//	}
//
//	printf("%d", ans);
//
//	return 0;
//}