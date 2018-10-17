//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//bool out[10];
//vector<int> counts;
//
//int check(int ch) {
//	if (ch == 0) {
//		if (!out[ch]) return 1;
//		else return 0;
//	}
//
//	int len = 0;
//	while (ch > 0) {
//		if (out[ch % 10])
//			return 0;
//		ch /= 10; 
//		len++;
//	}
//
//	return len;
//}
//
//
//int main() {
//
//	int N, M;
//	int channel = 100;
//	int i = 0;
//
//	scanf("%d\n%d", &N, &M);
//
//	memset(out, false, sizeof(out));
//
//	while (M--) {
//		int num;
//		scanf("%d", &num);
//		out[num] = true;
//	}
//
//	int ans = abs(N - channel);
//
//	for (i = 0; i <= 1000000; i++) {
//		int ch = i;
//
//		int len = check(ch);
//		if (len == 0) continue;
//
//		int press = abs(ch - N);
//		if (len + press < ans) ans = len + press;
//	}
//
//	printf("%d", ans);
//	
//	return 0;
//}