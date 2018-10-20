#include <iostream>
#include <queue>
#include <tuple>
#include <cstring>
#include <vector>

using namespace std;

int MAP[10][10];
int ORI[10][10];
bool visited[101][101];

int dx[4] = { -1,  0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

queue<int> q;
vector<int> pos;

int n, m;

int ans = 0;

void bfs(int val) {
	int xy, cnt;

	q.push(val);

	visited[val / 10][val % 10] = true;

	while(!q.empty()){
		
		xy = q.front(); q.pop();

		int x = xy / 10;
		int y = xy % 10;

		for (int d = 0; d < 4; d++) {
			int ix = x + dx[d];
			int iy = y + dy[d];

			if (ix < 0 || n <= ix || iy < 0 || m <= iy || MAP[ix][iy] != 0 || visited[ix][iy]) continue;

			MAP[ix][iy] = 2;
			visited[ix][iy] = true;
			q.emplace(ix * 10 + iy);
		}
	}
}

void spread() {
	memset(visited, false, sizeof(visited));
	pos.clear();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			MAP[i][j] = ORI[i][j];
			if (MAP[i][j] == 2) pos.push_back(i * 10 + j);
		}
	}

	for (int i = 0; i < pos.size(); i++) {
		bfs(pos[i]); // 2를 중심으로 탐색.
	}
}

int countZero() {
	int zero = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (MAP[i][j] == 0) zero += 1;
		}
	}

	return zero;
}


void BruteForce(int wall) {
	
	if (wall == 3) {
		spread();
		int zero = countZero();
		if (ans < zero) ans = zero;
		return;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ORI[i][j] == 0) {
				ORI[i][j] = 1;
				BruteForce(wall + 1);
				ORI[i][j] = 0;
			}
		}
	}  
}

int main() {
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &ORI[i][j]);
		}
	}

	BruteForce(0);

	cout << ans;

	return 0;
}