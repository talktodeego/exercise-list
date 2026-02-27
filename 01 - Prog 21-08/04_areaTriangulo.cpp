#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	float b, h, area;

	cout << "Qual o valor da base?\n";
	cin >> b;

	cout << "Qual o valor da altura?\n";
	cin >> h;

	area = b * h / 2;

	cout << "A area do triangulo e de " << area << " m2 " << endl;

	return 0;

}

// acertei