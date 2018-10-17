//#include <cstdio>
//
//using namespace std;
//
//int MAP[101][101];
//
//int main() {
//	
//	int i = 0;
//	int sx, sy, ex, ey;
//	int ans = 0;
//
//	while (i < 4) {
//		scanf("%d %d %d %d", &sx, &sy, &ex, &ey);
//		
//		for (int r = sx; r < ex; r++) {
//			for (int c = sy; c < ey; c++) {
//				if (!MAP[r][c]) {
//					MAP[r][c] = 1;
//					ans++;
//				}
//			}
//		}
//		i++;
//	}
//
//	printf("%d", ans);
//
//	return 0;
//}