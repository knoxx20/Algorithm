///*
//	�Է� ���� -2^62 ~ 2^62 �̹Ƿ� int�� ������ �� ����. 
//	long �� -2^31 ~ 2^31 - 1 �̹Ƿ� long long �������� ����Ѵ�. 
//	long long�� ���� ���ڴ� lld�̴�.
//*/
//
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//long long num[1000005];
//
//int main() {
//
//	int n;
//	int max=0;
//	int cnt = 0;
//	long long _max;
//	long long cur;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) scanf("%lld", &num[i]);
//	
//	sort(num, num + n);
//
//	cur = num[0];
//	for (int i = 0; i < n; i++) {
//		if (num[i] == cur) cnt++;
//		else cnt = 1;
//
//		cur = num[i];
//
//		if (cnt > max) {
//			max = cnt;
//			_max = cur;
//		}
//		else if (cnt == max && cur < _max) _max = cur;
//	}
//
//	printf("%lld", _max);
//
//	return 0;
//}