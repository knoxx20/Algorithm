//#include <cstdio>
//
//using namespace std;
//
//int main() {
//
//	int e, s, m;
//	int ESM[3] = { 0, 0, 0 };
//	int year = 0;
//
//	scanf("%d %d %d", &e, &s, &m);
//
//	while (1) {
//		ESM[0] = ESM[0] % 15 + 1;
//		ESM[1] = ESM[1] % 28 + 1;
//		ESM[2] = ESM[2] % 19 + 1;
//
//		year++;
//
//		if (ESM[0] == e && ESM[1] == s && ESM[2] == m) break;
//	}
//	
//	printf("%d", year);
//
//	return 0;
//}