#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	scanf("%d\n", &T);
	while (T--) {
		int n;
		scanf("%d\n", &n);
		
		int s = 0;
		while (n-- > 0) {
			int a, b, c;
			scanf("%d %d %d\n", &a, &b, &c);

			s += a * c;
		}

		printf("%d\n", s);
	}

	return 0;
}
