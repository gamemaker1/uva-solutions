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

		int r = floor(n / 3);
		int c = floor(m / 3);
		
		printf("%d\n", r * c);
	}

	return 0;
}