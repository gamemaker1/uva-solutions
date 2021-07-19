#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d\n", &n);
		
		int h = 0, l = 99;
		while (n--) {
			int s;
			scanf("%d", &s);
			
			if (s > h) h = s;
			if (s < l) l = s;
		}

		printf("%d\n", 2 * (h - l));
	}

	return 0;
}