#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		char c[6];
		cin >> c;

		if (strlen(c) == 5) {
			printf("3\n");
		} else {
			int o = 0;
			if (c[0] == 'o') o++;
			if (c[1] == 'n') o++;
			if (c[2] == 'e') o++;

			if (o > 1) {
				printf("1\n");
			} else {
				printf("2\n");
			}
		}
	}

	return 0;
}
