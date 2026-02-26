// O programa pergunta o salário e quantidade de horas trabalhadas no mês, se for menor igual a 100h o prêmio é de 10% do salário, acima de 100h o prêmio é de 15%
#include <iostream>

int main() {

	float salario{ 0.0f }, premio{ 0.0f };
	int horasTrabalhadas{ 0 };

	std::cout << "Qual o seu salario?\n";
	std::cin >> salario;

	std::cout << "\nQuantas horas voce trabalhou no mes?\n";
	std::cin >> horasTrabalhadas;

	if (horasTrabalhadas <= 100) {
		premio = salario * 0.1f;
	} else {
		premio = salario * 0.15f;
	}

	std::cout << "O seu salario padrao e de: " << salario << " e seu premio foi de: " << premio << ". Sendo assim, seu salario total e de " << premio + salario;

	return 0;
}