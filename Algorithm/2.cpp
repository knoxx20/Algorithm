//#include <cstdio>
//#include <vector>
//#include <cmath>
//
//#define base 100
//
//using namespace std;
//
//int map[410][410];
//
//void change(int x, int y, int size) {
//	size--;
//	x -= size;
//	int cnt = 1;
//	for (int i = 0; i <= size; i++) {
//		for (int j = 0; j < cnt; j++) {
//			if (x < 0 || x >= 410 || y + j < 0 || y + j >= 410) continue;
//			map[x][y + j] = 1;
//		}
//		x++;
//		y--;
//		cnt += 2;
//	}
//	cnt -= 4;
//	y += 2;
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < cnt; j++) {
//			if (x < 0 || x >= 410 || y + j < 0 || y + j >= 410) continue;
//			map[x][y + j] = 1;
//		}
//		x++;
//		y++;
//		cnt -= 2;
//	}
//}
//
//// house 는 house_size * 2 크기인 2차원 배열입니다.
//int solution(int N, vector<vector<int>> house){
//	int answer = 0;
//	int left = 0, right = 401, mid;
//
//	int h_size = house.size();
//
//	while (left<right) {
//		mid = (left + right) / 2;
//		for (int i = 0; i < 210; i++) // 초기화
//			for (int j = 0; j < 210; j++)
//				map[i][j] = 0;
//
//		for (int i = 0; i < h_size; i++) {
//			change(house[i][0] + base, house[i][1] + base, mid);
//		}
//		int canuse = 0;
//		for (int i = 0; i <= 200; i++)
//			for (int j = 0; j <= 200; j++)
//				if (map[i][j] == 0) canuse++;
//		if (canuse >= N) {
//			left = mid + 1;
//			if (mid > answer)
//				answer = mid;
//		}
//		else
//			right = mid;
//	}
//	answer /= 2;
//	for (int i = 0; i < 210; i++) // 초기화
//		for (int j = 0; j < 210; j++)
//			map[i][j] = 0;
//	for (int i = 0; i < h_size; i++) {
//		change(house[i][0] + base, house[i][1] + base, answer);
//	}
//	int temp = pow(answer,2) + pow((answer + 1),2);
//	int canuse = 0;
//
//	for (int i = 0; i <= 200; i++)
//		for (int j = 0; j <= 200; j++)
//			if (map[i][j] == 0) {
//				int ok = 1;
//				for (int k = 0; k < h_size; k++) {
//					int dist = (i - house[k][0] - base)*(i - house[k][0] - base)
//						+ (j - house[k][1] - base)*(j - house[k][1] - base);
//					if (dist < temp) {
//						ok = 0;
//						break;
//					}
//				}
//				if (ok) canuse++;
//			}
//	if (canuse >= N) answer = temp;
//	else answer = 2* pow(answer, 2);
//	return answer;
//}