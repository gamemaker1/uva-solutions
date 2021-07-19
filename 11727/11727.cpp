#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		int arr[] = { a, b, c };
		sort(arr, arr + 3);

		printf("Case %d: %d\n", i, arr[1]);
	}

	return 0;
}
