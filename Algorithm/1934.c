//#include <stdio.h>
//
//int _gcd;
//
//int LCD[1001];
//
//int gcd(int p, int q) {
//	if (q == 0) return p;
//
//	if (p > q) gcd(q, (p - q) % q);
//	else gcd(p, (q - p) % p);
//}
//
//int lcd(int p, int q) {
//	return p * q / gcd(p,q);
//}
//
//
//int main() {
//	int t;
//	int p, q;
//
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++) {
//		scanf("%d %d", &p, &q);
//		LCD[i] = lcd(p, q);
//	}
//
//	for(int i=0;i<t;i++)
//		printf("%d\n", LCD[i]);
//
//	return 0;
//}