//#include <stdio.h>
//#include <string.h>
//
//typedef struct score {
//	char name[11];
//	int kor;
//	int eng;
//	int math;
//}SCORE;
//
//SCORE scores[100005];
//SCORE tmp[100005];
//
//void strclr(char* name) {
//	int i = 0;
//	
//	while (name[i] != '\0') {
//		name[i++] = "";
//	}
//}
//
//int cmp(SCORE s1, SCORE s2) {
//	if (s1.kor > s2.kor) return 1;
//	else if (s2.kor == s1.kor) {
//		if (s1.eng < s2.eng) return 1;
//		else if (s1.eng == s2.eng) {
//			if (s1.math > s2.math) return 1;
//			else if (s1.math == s2.math) return !(s1.name < s2.name);
//		}
//	}
//	return 0;
//}
//
//void scorecpy(SCORE *des, SCORE *res) {
//	strclr(des->name);
//	strcpy(des->name, res->name);
//	des->kor = res->kor;
//	des->eng = res->eng;
//	des->math = res->math;
//}
//
//void merge(int start, int end) {
//	int i = start;
//	int mid = (start + end) / 2;
//	int j = mid + 1;
//	int k = 0;
//
//	while (i <= mid && j <= end) {
//		if (cmp(scores[i], scores[j])) scorecpy(&tmp[k++], &scores[i++]);
//		else scorecpy(&tmp[k++], &scores[j++]);
//	}
//
//	while (i <= mid) scorecpy(&tmp[k++], &scores[i++]);
//	while (j <= end) scorecpy(&tmp[k++], &scores[j++]);
//
//	for (i = start; i <= end; i++) {
//		scorecpy(&scores[i], &tmp[i-start]);
//	}
//}
//
//void sort(int start, int end) {
//	int mid = (start + end) / 2;
//
//	if (start == end) return;
//
//	sort(start, mid);
//	sort(mid+1, end);
//	merge(start, end);
//}
//
//int main() {
//	
//	int n,i;
//	
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%s %d %d %d", scores[i].name, &scores[i].kor, &scores[i].eng, &scores[i].math);
//	}
//	
//	sort(0, n - 1);
//
//	for (i = 0; i < n; i++) {
//		printf("%s\n", scores[i].name);
//	}
//
//	return 0;
//}