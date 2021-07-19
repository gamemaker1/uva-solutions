#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int T = 0;
	while (1) {
		T++;

		int n;
		scanf("%d\n", &n);

		if (n == 0) break;
		
		int p = 0, m = 0;
		for (int i = 0; i < n; i++) {
			int e;
			scanf("%d", &e);
			if (e == 0) {
				p++;
			} else {
				m++;
			}
		}

		printf("Case %d: %d\n", T, m - p);
	}

	return 0;
}
