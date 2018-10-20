#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int map[101][101];

int dx[4] = {1,  0, -1, 0};
int dy[4] = {0, -1,  0, 1};
int hist[5000];
int _hist = 0;

int n;


void Dragon(int x, int y, int d, int g, int gen) {

	int ix = x;
	int iy = y;
	int nx, ny;

	if (gen > g) return;

	if (gen == 0) {
		hist[0] = d;
		_hist++;
		map[iy][ix] = 1;
		map[iy + dy[d]][ix + dx[d]] = 1;
		Dragon(iy + dy[d], ix + dx[d], (d + 1) % 4, g, gen + 1);
	}

	int end = _hist - 1;
	int index = end;
	for (int i = end; 0 <= i; i--) {
		int dir = hist[i];
		nx = ix + dx[dir];
		ny = iy + dy[dir];

		map[iy][ix] = 1;
		map[ny][nx] = 1;
		ix = nx;
		iy = ny;

		hist[index++] = (dir+1) % 4;
	}

	Dragon(nx, ny, (d + 1) % 4, g, gen + 1);
}

void clearArr() {

	for (int i = 0; i < 5000; i++)
		hist[i] = 0;
}

int main() {
	int ans = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y, d, g;
		cin >> x >> y >> d >> g;
		clearArr();
		Dragon(x, y, d, g, 0);
		cout << ans << endl;
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (!map[i][j] || 101 <= i + 1 || 101 <= j + 1) continue;
			int box = map[i][j] * map[i][j+1] * map[i+1][j] * map[i+1][j+1];
			if (box) ans++;
		}
	}

	cout << ans;

	return 0;
}