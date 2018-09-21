///*
//	1. 알파벳 확인시 'A'-'A' = 0 임을 빼먹지 말 것. index > 0 이 아니라, index >= 0 이어야함. 
//	   다른 방법으로, if('0'<= B[i] && B[i] <='9')로 하는 방법이 있음.
//
//	2. val = 1, num += val*(index+10); val *= b;를 하거나, 
//	   num = 0, val = b, num += num*val + index;를 해도 됨.
//
//*/
//
//
//#include <stdio.h>
//#include <string.h>
//
//char  B[35];
//
//int main() {
//
//	long num = 0;
//	int index;
//	int  b;
//	int len;
//	int i = 0;
//	long long val = 1;
//
//	scanf("%s %d", B, &b);
//	len = strlen(B);
//
//	for (i = len-1; 0 <= i; i--) {
//		if ((index = B[i] - 'A') >= 0) num += val*(index + 10);
//		else {
//			index = B[i] - '0';
//			num += val * index;
//		}
//		val *= b;
//	}
//
//	printf("%ld", num);
//
//	return 0;
//}