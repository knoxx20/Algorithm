//#include <cstdio>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//int check[1000000];
//
//int next(int a, int p) {
//	int sum = 0;
//	while (a > 0) {
//		sum += pow(a % 10, p);
//		a /= 10;
//	}
//	return sum;
//}
//
//
//int length(int a, int p, int cnt) {
//	if (check[a] != 0) return check[a] - 1;
//
//	check[a] = cnt;
//	int _next = next(a, p);
//	return length(_next, p, cnt + 1);
//}
//
//
//int main() {
//	
//	int A,p;
//	
//	scanf("%d %d", &A, &p);
//	
//	printf("%d\n", length(A, p, 1));
//
//	return 0;
//}