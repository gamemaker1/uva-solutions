#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int p, c1, c2, c3;
	while (scanf("%d %d %d %d", &p, &c1, &c2, &c3) == 4) {
		if (p == 0 && c1 == 0 && c2 == 0 && c3 == 0) break;

		printf("%d\n", 1080 + ((p - c1 + 40) % 40 + (c2 - c1 + 40) % 40 + (c2 - c3 + 40) % 40) * 9);
	}

	return 0;
}