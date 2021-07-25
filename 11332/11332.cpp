#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n;
	while (scanf("%lld", &n) == 1) {
		if (n == 0) break;

		int m = 0;
		while (1) {
			while (n != 0) {
				m += n % 10;
				n /= 10;
			}

			if (m / 10 == 0) {
				break;
			} else {
				n = m;
				m = 0;
			}
		}

		printf("%d\n", m);
	}

	return 0;
}