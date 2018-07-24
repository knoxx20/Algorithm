//#include <stdio.h>
//
//char paren[100001];
//int top = -1;
//
//void push(char ch) {
//	paren[++top] = ch;
//}
//
//char pop() {
//	if (top < 0) return -1;
//	return paren[top--];
//}
//
//int main() {
//	char info[100001];
//	char par;
//	int i=0,sum=0,count=0;
//
//	scanf("%s", info);
//	
//	while ((par=info[i]) != '\0') {
//		switch (par) {
//		case '(':
//			push(par);
//			break;
//
//		case ')':
//			pop();
//			if (info[i-1] != par) {
//				sum += (top + 1);
//			}
//			else {
//				count++;
//			}
//			break;
//		}
//		i++;
//	}
//
//	printf("%d\n", sum + count);
//
//	return 0;
//}