//#include <stdio.h>
///*
//<���� �ذ�>
//�迭�� �Ϸķ� ����ϸ� 5000 * 5000�̹Ƿ� ����� �ʹ� Ŀ����. 
//����ť(��)���� ��������.
//*/
//
//int DESK[5010];
//int head = 1;
//int tail = 1;
//int n, m;
//
//int dequeue(){
//	int front= DESK[head];
//	head = (head + 1) % n + 1;
//	return front;
//}
//
//int enqueue(int value) {
//	tail = (tail + 1) % n + 1;
//	DESK[tail] = value;
//}
//
//void Josephus() {
//	
//	printf("<");
//	
//	while (tail != head) {
//		if(head % m == 0) printf("%d, ", dequeue());
//		else enqueue(DESK[dequeue()]);
//	}
//	
//	printf("%d>", DESK[head]);
//}
//
//int main() {	
//	int i, j;
//	
//	scanf("%d %d", &n, &m);
//	tail = n;
//
//	for (i = 1; i <= n; i++) {
//		DESK[i] = i;
//	}
//
//	Josephus();
//
//	return 0;
//}