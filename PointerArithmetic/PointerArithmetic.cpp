#include <iostream>
#include <string>


using namespace std;

int main() {

	const int NSTRINGS = 5;
	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };

	string *pTexts = texts;		// pointer to the first element

	pTexts++;
	cout << *pTexts << endl;

	// You can point to the memory after the array, but don't read or write
	// to that memory.
	string *pEnd = &texts[NSTRINGS];
	pTexts = &texts[0];

	while (pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++;
	}

	// set pTexts back to start
	pTexts = &texts[0];

	long long elements = (long long)(pEnd - pTexts);

	cout << elements << endl;


	// set pTexts back to start
	pTexts = &texts[0];
	pTexts += NSTRINGS / 2;
	cout << *pTexts << endl;


	return 0;
}

