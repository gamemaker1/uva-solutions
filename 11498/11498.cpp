#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	while (1) {
		int q;
		scanf("%d\n", &q);

		if (q == 0) break;

		int dx, dy;
		scanf("%d %d\n", &dx, &dy);
		
		while (q--) {
			if (q < 0) break;

			int hx, hy;
			scanf("%d %d\n", &hx, &hy);

			if (hx == dx || hy == dy) {
				printf("divisa\n");
			} else if (hx > dx && hy > dy) {
				printf("NE\n");
			} else if (hx < dx && hy > dy) {
				printf("NO\n");
			} else if (hx > dx && hy < dy) {
				printf("SE\n");
			} else if (hx < dx && hy < dy) {
				printf("SO\n");
			}
		}
	}

	return 0;
}
