#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	bool f = true;
	while (1) {
		char c = cin.get();
		if (cin.eof()) break;
		
		if (c == '"') {
			if (f) {
				printf("``");
				f = false;
			} else {
				printf("''");
				f = true;
			}
		} else {
			printf("%c", c);
		}
	}

	return 0;
}