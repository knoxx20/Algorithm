///*
//	���� int ������ �Ѿ���� �ȳѾ���� Ȯ���� ��.
//	�Ѿ�Ƿ� int�� �ƴ� long �������� �����ؾ��Ѵ�.
//*/
//
//
//#include <stdio.h>
//
//int num[101];
//
//int gcd(int p, int q) {
//	if (q == 0) return p;
//
//	if (p > q) gcd(q, (p - q) % q);
//	else gcd(p, (q - p) % p);
//}
//
//int main() {
//
//	int t,n;
//	scanf("%d", &t);
//
//	for (int i = 0; i < t; i++) {
//		scanf("%d", &n);
//		for (int j = 0; j < n; j++) scanf("%d", &num[j]);
//		
//		long sum = 0;
//
//		for (int j = 0; j < n - 1; j++)	for (int k = j + 1; k < n; k++) sum += gcd(num[j], num[k]);
//		
//		printf("%ld\n", sum);
//	}
//
//
//	return 0;
//}