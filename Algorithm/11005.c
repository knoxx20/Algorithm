//#include <stdio.h>
//
//char alpha[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
//int  B[35];
//
//int main() {
//
//	long n,val;
//	int  b;
//	int i = 0;
//
//	scanf("%ld %d", &n, &b);
//
//	val = n;
//
//	while (val >= 1) {
//		B[i++] = val % b;
//		val /= b;
//	}
//
//	for (int j = i - 1; 0 <= j; j--) {
//		if (B[j] >= 10) printf("%c", alpha[B[j] - 10]);
//		else printf("%d", B[j]);
//	}
//
//	return 0;
//}