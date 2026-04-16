#include <iostream>

int main() {
	int numListAlpha[10], numListBeta[10], size{ 0 };

	size = sizeof(numListAlpha) / sizeof(numListAlpha[0]);

	for (int i = 0; i < size; i++) {
		std::cout << "Informe um numero: ";
		std::cin >> numListAlpha[i];

		if (numListAlpha[i] % 2 == 0) {
			numListBeta[i] = numListAlpha[i] * 2;
		}
		else {
			numListBeta[i] = numListAlpha[i] * 3;
		}
	}

	for (int j = 0; j < size; j++) {
		std::cout << numListAlpha[j] << " ";
	}

	std::cout << std::endl;

	for (int k = 0; k < size; k++) {
		std::cout << numListBeta[k] << " ";
	}

}