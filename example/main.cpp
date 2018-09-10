#include <iostream>
using namespace std;

int main(void) {
	int nCases;
	int a, b;
	char operation;
	cin >> nCases;
	for (int i = 0; i < nCases; i++) {
		cin >> operation >> a >> b;
		cout << (operation == 's' ? a + b : operation == 'r' ? a - b : a * b) << endl;
	}

	return 0;
}
