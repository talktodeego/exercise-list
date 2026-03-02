//O programa pede ao usuário que forneça dois numeros e imprime qual é par e impar. O programa faz validações como se os dois numeros são iguais e que o primeiro numero seja menor que o segundo
#include <iostream>

int main() {

	int numOne = {0}, numTwo{0};

	//pede ao usuário os dois numeros e faz a confirmação que o primeiro seja menor que o segundo e que não seja igual ao segundo
	do {

		std::cout << "Digite um numero: ";
		std::cin >> numOne;

		std::cout << "Digite outro numero: ";
		std::cin >> numTwo;

		if (numOne > numTwo) {
			std::cout << "Entrada invalida! O primeiro numero deve ser menor que o segundo\n";
		}
		else if (numOne == numTwo) {
			std::cout << "Entrada invalida! O primeiro numero nao pode ser igual ao segundo numero\n";
		}

	} while (numOne >= numTwo);


	//o loop que imprime par ou impar de acordo com o indice num++
	for (int num = numOne; num <= numTwo; num++) {
		std::cout << num;

		if (num % 2 == 0) {
			std::cout << " PAR\n";
		}else {
			std::cout << " IMPAR\n";
		}
	}
	return 0;
}