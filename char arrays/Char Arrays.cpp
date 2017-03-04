#include <iostream>
#include <string>

using namespace std;

//

int main() {

	//string text = "hello";
	
	//char text[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	
	char text[] = { "hello" };

	for (int i = 0; i < sizeof(text); i++) {

	cout << i << ": " << text[i] << endl;
	}

	int k = 0;
	while (true) {
		if (text[k] == 0) 
			break;

		cout << text[k] << flush;
		k++;


	}
	cout << endl;

	return 0;
}
