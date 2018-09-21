//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char *par;
//char *str;
//int top = -1;
//int *result;
//
//void push(char c) {
//	par[++top] = c;
//}
//
//char pop() {
//	if (top < 0) return -1;
//	return par[top--];
//}
//
//int is_empty() {
//	if (top < 0) return 1;
//	else return 0;
//}
//
//void init_stck() {
//	par = malloc(sizeof(char) * 55);
//	str = malloc(sizeof(char) * 55);
//	top = -1;
//}
//
//int main() {
//	int tc, i,j, flag, size;
//	char ch;
//
//	scanf("%d", &tc); //ÁÙ °¹¼ö ÀúÀå
//	result = malloc(sizeof(int)*(tc+1));
//	
//	for (i = 0; i < tc; i++) { 
//		flag = 1;
//		init_stck(); // ½ºÅÃ ÃÊ±âÈ­ 
//		
//		scanf("%s", str); // °ýÈ£ ÀÔ·Â
//		size = strlen(str);
//
//		for(j=0;j<size;j++) { // °ýÈ£ Å½»ö
//			ch = str[j];
//			if (ch == ')') { 
//				if (pop() == -1) {
//					result[i]=0;
//					flag = 0;
//					break;
//				}
//			}
//			else if(ch== '('){
//				push('(');
//			}
//		}
//
//		if (flag) {
//			if(is_empty()) result[i]=1;
//			else result[i]=0;
//		}
//	}
//
//	for (i = 0; i < tc; i++) {
//		if (result[i]) printf("Yes\n");
//		else printf("No\n");
//	}
//
//	return 0;
//}