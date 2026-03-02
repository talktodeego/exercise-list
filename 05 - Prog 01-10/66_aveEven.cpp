//Pede um numero ao usuário e verifica se é par ou não e no fim do programa faz o calculo da média entre todos os números pares fornecidos
#include <iostream>

int main() {
	int num{ 0 }, sum{ 0 }, i{ 0 }, countEven{ 0 };
	float media{ 0.0f };

	while (i < 10) {
		std::cout << "Digite um numero: \n";
		std::cin >> num;

		//verifica se o numero informado é par, se for, o contador sobe um valor
		if (num % 2 == 0) {
			sum += num;
			countEven++;
		}
		i++;
	}

	//calculo a media dos numeros pares informado pelo o usuario
	if (countEven > 0) {
		media = (float)sum / countEven;
	}


	std::cout << "A soma total e de: " << sum
		<< "\nE a media e de: " << media;

	return 0;
}