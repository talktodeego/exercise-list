#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	float f, c;

	cout << "Insira o valor em Fahrenheit: " << endl;
	cin >> f;

	c = (f - 32) * 5 / 9;

	cout << "\nO valor em Celsius e de: " << c;

	return 0;
}

// acertei