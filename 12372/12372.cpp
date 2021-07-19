#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		int l, w, h;
		scanf("%d %d %d\n", &l, &w, &h);
		if (l > 20 || w > 20 || h > 20) {
			printf("Case %d: bad\n", i);
		} else {
			printf("Case %d: good\n", i);
		}
	}

	return 0;
}
