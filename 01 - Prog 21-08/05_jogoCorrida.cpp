#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	float distancia, litros, desempenho;

	cout << "Qual foi a distancia percorrida?\n";
	cin >> distancia;

	cout << "\nQual foi a quantidade de gasolina gasta?\n";
	cin >> litros;

	desempenho = distancia / litros;

	cout << "O desempenho km/litros do carro foi de " << desempenho << endl;

	return 0;
}

// acertei