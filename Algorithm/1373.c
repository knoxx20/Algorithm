//#include <stdio.h>
//#include <string.h>
//
//char  B[1000005];
//int num[350000];
//
//int main() {
//
//	int k = 0;
//	int len, rest;
//	int b = 2;
//
//	scanf("%s", B);
//	len = strlen(B);
//
//	rest = len % 3;
//
//	if (rest == 1) printf("%d", (B[0]-'0'));
//	else if (rest == 2) printf("%d", (B[0]-'0') * 2 + (B[1]-'0') * 1); 
//	
//	for (int i = rest; i < len; i += 3) {
//		num[k++] = (B[i]-'0') * 4 + (B[i+1] - '0') * 2 + (B[i+2] - '0') * 1;
//	}
//
//	for (int j = 0; j < k; j++) printf("%d", num[j]);
//
//	return 0;
//}