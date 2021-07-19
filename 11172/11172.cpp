#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m;
		scanf("%d %d", &n, &m);

		if (n > m) {
			printf(">\n");
		} else if (m > n) {
			printf("<\n");
		} else {
			printf("=\n");
		}
	}

	return 0;
}