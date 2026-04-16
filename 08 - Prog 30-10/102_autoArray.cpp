#include <iostream>

int main() {
	int arrA[10], arrB[10], size{ 0 };

	size = sizeof(arrA) / sizeof(arrA[0]);

	for (int i = 0; i < size; i++) {
		
		do {
			std::cout << "Informe o " << i + 1 << "o numero: ";
			std::cin >> arrA[i];
			
			if (arrA[i] < 0) {
				std::cout << "Informe um numero maior ou igual a 0\n";
			}

		} while (arrA[i] < 0);

		arrB[i] = arrA[i] * arrA[i];
	}

	for (int j = 0; j < size; j++) {
		std::cout << arrA[j] << " ";
	}

	std::cout << std::endl;

	for (int k = 0; k < size; k++) {
		std::cout << arrB[k] << " ";
	}

	return 0;
}