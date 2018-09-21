//#include <stdio.h>
//#include <string.h>
//
//typedef struct client {
//
//	int age;
//	char name[101];
//
//}CLIENT;
//
//CLIENT clients[100005];
//CLIENT tmp[100005];
//
//void strclr(char *str) {
//	int i = 0;
//
//	while (str[i] != '\0') {
//		str[i++] = "";
//	}
//}
//
//
//int cmp(int i, int j) {
//	int age1 = clients[i].age;
//	int age2 = clients[j].age;
//
//	if (age1 < age2)		return 1;
//	else if (age1 == age2)	return i < j;
//	else return 0;
//}
//
//
//void merge(int start, int end) {
//	int mid = (start + end) / 2;
//	int i = start;
//	int j = mid + 1;
//	int k = 0;
//	
//	while (i <= mid && j <= end) {
//		if (cmp(i, j)) {
//			tmp[k].age = clients[i].age;
//			strcpy(tmp[k++].name, clients[i++].name);
//		}
//		else {
//			tmp[k].age = clients[j].age;
//			strcpy(tmp[k++].name, clients[j++].name);
//		}
//	}
//
//	while (i <= mid) {
//		tmp[k].age = clients[i].age;
//		strcpy(tmp[k++].name, clients[i++].name);
//	}
//	while (j <= end) {
//		tmp[k].age = clients[j].age;
//		strcpy(tmp[k++].name, clients[j++].name);
//	}
//
//	for (i = start; i <= end; i++) {
//		clients[i].age = tmp[i - start].age;
//		strclr(clients[i].name);
//		strcpy(clients[i].name, tmp[i - start].name);
//	}
//}
//
//
//
//void sort(int start, int end) {
//	int mid = (start + end) / 2;
//
//	if (start == end) return;
//
//	sort(start, mid);
//	sort(mid + 1, end);
//	merge(start, end);
//}
//
//
//int main() {
//	int n;
//	int i;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d %s", &clients[i].age, clients[i].name);
//	}
//
//	sort(0, n - 1);
//
//	for (i = 0; i < n; i++) {
//		printf("%d %s\n", clients[i].age, clients[i].name);
//	}
//
//	return 0;
//}