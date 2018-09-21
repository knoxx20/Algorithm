///*
//	모든 경우의 수에 대해서 잘 따져보기.
//	0이 입력 되었을 때에는 0이 출력되어야 한다.
//  다른 풀이) 1212_BJ.cpp 참고
//*/
//
//#include <cstdio>
//#include <cstring>
//
//using namespace std;
//
//char hex[340000];
//int  Binary[3];
//
//void binary(int num) {
//	int i = 0;
//	int val = num;
//
//	while (val >= 1) {
//		Binary[i++] = val % 2;
//		val /= 2;
//	}
//
//	while (i < 3) Binary[i++] = 0;
//}
//
//
//int main() {
//	int flag = 0; 
//
//	scanf("%s", hex);
//
//	int len = strlen(hex);
//
//	if (len == 1 && hex[0] == '0') printf("0");
//	else {
//		for (int i = 0; i < len; i++) {
//			binary(hex[i] - '0');
//			for (int j = 2; 0 <= j; j--) {
//				if (i == 0 && Binary[j]) flag = 1;
//				if (i == 0 && !flag) continue;
//				printf("%d", Binary[j]);
//			}
//		}
//	}
//	return 0;
//}