#include <bits/stdc++.h>

using namespace std;

int main() {
	while (1) {
		int t = 0, n = 0;
		double l = 0, d = 0, dip[101];
		scanf("%d %lf %lf %d\n", &t, &d, &l, &n);

		if (t <= 0) {
			break;
		}

		while (n-- > 0) {
			int m;
			double p;
			scanf("%d %lf\n", &m, &p);
			for (int i = m; i <= 100; i++) {
				dip[i] = p;
			}
		}

		int j = 0;
		double k = l / t;
		double v = (d + l) * (1 - dip[0]);
		while (v < l) {
			j++;
			l -= k;
			v *= (1 - dip[j]);
		}

		if (j == 1) {
			printf("1 month\n");
		} else {
			printf("%d months\n", j);
		}
	}

	return 0;
}
