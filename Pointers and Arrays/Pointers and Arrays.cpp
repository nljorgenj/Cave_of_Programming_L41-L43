#include <iostream>
#include <string>

using namespace std;

int main() {

	string texts[] = { "one", "two", "three" };

	string *pTexts = texts;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << texts[i] << " " << flush;
	}
	cout << endl;


	for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	string *pElement = &texts[0];	// pointer to the first element
									// the same as *pElement = texts;
	string *pEnd = &texts[2];

	while (true) {
		cout << *pElement << " " << flush;

		if (pElement == pEnd) {
			break;
		}

		pElement++;
	}

	return 0;
}
