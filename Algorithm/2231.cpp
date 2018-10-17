//#include <cstdio>
//
//using namespace std;
//
//int main() {
//
//	int N;
//	int ans;
//	
//	scanf("%d", &N);
//
//	for (int i = 1; i < 1000000; i++) {
//		int num = i;
//		int sum = num;
//		while (num >= 1){
//			sum += num % 10;
//			num /= 10;
//		}
//		if (sum == N) {
//			ans = i;
//			break;
//		}
//	}
//
//	printf("%d", ans);
//
//	return 0;
//}