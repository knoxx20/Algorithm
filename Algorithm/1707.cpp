#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

vector<int> MAP[20002];
bool visited[20002];

void bigraph() {


}



int main() {

	int k;
	scanf("%d", &k);

	int v, e;

	for (int i = 0; i < k; i++) {
		scanf("%d %d", &v, &e);
		for (int j = 0; j < e; j++) {
			int v1, v2;
			scanf("%d %d", &v1, &v2);
			MAP[v1].push_back(v2);
			MAP[v2].push_back(v1);
		}
		bigraph();
	}

	return 0;
}