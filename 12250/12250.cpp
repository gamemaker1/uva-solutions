#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int T = 0;
	while (1) {
		T++;
		string text;
		cin >> text;

		if (text == "#") {
			break;
		} else {
			printf("Case %d: ", T);
			if (text == "HELLO") printf("ENGLISH\n");
			else if (text == "HOLA") printf("SPANISH\n");
			else if (text == "HALLO") printf("GERMAN\n");
			else if (text == "BONJOUR") printf("FRENCH\n");
			else if (text == "CIAO") printf("ITALIAN\n");
			else if (text == "ZDRAVSTVUJTE") printf("RUSSIAN\n");
			else printf("UNKNOWN\n");
		}
	}

	return 0;
}
