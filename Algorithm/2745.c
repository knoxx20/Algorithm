///*
//	1. ���ĺ� Ȯ�ν� 'A'-'A' = 0 ���� ������ �� ��. index > 0 �� �ƴ϶�, index >= 0 �̾����. 
//	   �ٸ� �������, if('0'<= B[i] && B[i] <='9')�� �ϴ� ����� ����.
//
//	2. val = 1, num += val*(index+10); val *= b;�� �ϰų�, 
//	   num = 0, val = b, num += num*val + index;�� �ص� ��.
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