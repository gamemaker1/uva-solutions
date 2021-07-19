#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);

		int r = (((n * 567 / 9) + 7492) * 235 / 47) - 498;
		printf("%d\n", abs((r / 10) % 10));
	}

	return 0;
}
