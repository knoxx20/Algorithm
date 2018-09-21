//#include <stdio.h>
//
//int _gcd;
//
//int gcd(long long p, long long q) {
//	if (q == 0) return p;
//
//	if (p > q) gcd(q, (p - q) % q);
//	else gcd(p, (q - p) % p);
//}
//
//int main() {
//	long long p, q;
//
//	scanf("%lld %lld", &p, &q);
//
//	_gcd = gcd(p, q);
//
//	for (long long i = 0; i < _gcd; i++) printf("1");
//
//	return 0;
//}