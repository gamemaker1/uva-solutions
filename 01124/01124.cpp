#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	while (1) {
		char c = cin.get();
		if (cin.eof()) break; else printf("%c", c);
	}

	return 0;
}