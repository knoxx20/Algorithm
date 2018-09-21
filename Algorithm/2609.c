//#include <stdio.h>
//
//int _gcd;
//
//
//int gcd(int p, int q) {
//	if (q == 0) return p;
//
//	if (p > q) gcd(q, (p - q) % q);
//	else gcd(p, (q - p) % p);
//}
//
//int lcd(int p, int q) {
//	return p * q / _gcd;
//}
//
//
//int main() {
//	int p, q;
//
//	scanf("%d %d", &p, &q);
//
//	printf("%d\n", _gcd = gcd(p, q));
//	printf("%d", lcd(p, q));
//
//	return 0;
//}