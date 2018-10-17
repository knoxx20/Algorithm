//#include <cstdio>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//bool possible[988];
//bool integer[10];
//
//int detect(int num, int guess) {
//	int _guess = guess;
//	int strike = 0, ball = 0;
//	int now;
//	int i = 0;
//	
//	memset(integer, false, 10);
//
//	//num에 똑같은 숫자가 있는 경우 return 0;
//	while (num > 0){
//		now = num % 10;
//		if (now == 0 || integer[now]) return 0;
//
//		if (now == (_guess % 10)) strike++;
//		else { 
//			int search = guess;
//			for (int j = i; j < 3; j++) {
//				if ((search % 10) == now)  ball++;
//				search /= 10;
//			}
//		}
//
//		integer[now] = true;
//		num /= 10;
//		_guess /= 10;
//		i++;
//	}
//
//	return strike * 10 + ball;
//}
//
//int main() {
//	int n;
//
//	memset(possible, true, sizeof(possible));
//
//	scanf("%d", &n);
//
//	while (0 < n) {
//		int guess, strike, ball;
//		scanf("%d %d %d", &guess, &strike, &ball);
//		int result = strike * 10 + ball;
//
//		for (int i = 123; i <= 987; i++) {
//			int num = i;
//			if (!possible[num]) continue;
//			int SB = detect(num, guess);
//			if (SB != result) possible[num] = false;
//		}
//		n--;
//	}
//
//	int ans = 0;
//
//	for (int i = 123; i <= 987; i++) {
//		if (possible[i]) {
//			printf("%d ", i);
//			ans++;
//		}
//	}
//	printf("\n");
//	printf("%d", ans);
//
//	return 0;
//}