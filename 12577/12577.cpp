#include <bits/stdc++.h>

using namespace std;

int main() {
	int T = 0;
	while (1) {
		T++;
		string text;
		cin >> text;

		if (text == "*") {
			break;
		} else {
			printf("Case %d: ", T);
			if (text == "Hajj") printf("Hajj-e-Akbar\n");
			else if (text == "Umrah") printf("Hajj-e-Asghar\n");
		}
	}

	return 0;
}
