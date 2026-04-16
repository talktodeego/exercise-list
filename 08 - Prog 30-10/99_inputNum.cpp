#include <iostream>

int main() {
	int numList[10], numInput{ 0 }, numEven{ 0 }, numOdd{ 0 }, size{ 0 };

	size = sizeof(numList) / sizeof(numList[0]);

	for (int i = 0; i < size; i++) {
		do {
			std::cout << "Informe um numero: " << std::endl;
			std::cin >> numInput;
			if (numInput < 0) {
				std::cout << "Por favor, informe um numero positivo\n";
			}
		} while (numInput < 0);
		numList[i] = numInput;

	}

	//imprime a lista par
	std::cout << "Esses sao os numeros pares: " << std::endl;
	for (int j = 0; j < size; j++) {
		if (numList[j] % 2 == 0) {
			std::cout << numList[j] << " ";
			numEven += numList[j];
		}
	}

	std::cout << "\nEsses sao os numeros impares: " << std::endl;
	for (int k = 0; k < size; k++) {
		if (numList[k] % 2 == 1) {
			std::cout << numList[k] << " ";
			numOdd += numList[k];
		}
	}

	std::cout << "\n========================\n";
	std::cout << "E essa e a soma dos numeros pares: " << numEven;
	std::cout << "\nE essa e a soma dos numeros impares: " << numOdd;
	std::cout << "\n========================\n";

	return 0;
}