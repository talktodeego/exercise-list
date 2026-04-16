#include <iostream>

int main() {
	float wageBR[5], wageUS[5], tax{ 0.0f };
	int size{ 0 };

	size = sizeof(wageBR) / sizeof(wageBR[0]);

	do {
		std::cout << "Informe qual eh a contacao do dolar hoje: ";
		std::cin >> tax;
		if (tax <= 0) {
			std::cout << "Por favor, informe uma cotacao valida\n";
		}
	} while (tax <= 0);

	for (int i = 0; i < size; i++) {
		std::cout << "Informe os salarios em reais: ";
		std::cin >> wageBR[i];
		wageUS[i] = wageBR[i] / tax;
	}

	std::cout << "\n====== CONVERSAO DOS SALARIOS ======\n";

	for (int j = 0; j < size; j++) {
		std::cout << "R$ " << wageBR[j] << " || " << "U$ " << wageUS[j] << std::endl;
	}

	return 0;
}