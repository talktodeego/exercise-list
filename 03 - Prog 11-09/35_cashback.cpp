// O programa pede ao usuário três salários, faz o calculo da média salarial dos ultimos três meses e calcula um cashback de acordo com o tipo de opcao que o usuário escolher
#include <iostream>
#include <cstdlib>

int main() {
	
	float cashback{ 0.0f }, saldoM1{ 0.0f }, saldoM2{ 0.0f }, saldoM3{ 0.0f }, mediaSaldo{0.0f};
	int tipoJogador;

	std::cout << "Qual o seu saldo no fim do mes de janeiro?\n";
	std::cin >> saldoM1;

	std::cout << "Qual o seu saldo no fim do mes de fevereiro?\n";
	std::cin >> saldoM2;

	std::cout << "Qual o seu saldo no fim do mes de marco?\n";
	std::cin >> saldoM3;

	std::cout << "Qual e o tipo do jogador? (1, 2, 3 ou 4)\n";
	std::cin >> tipoJogador;

	mediaSaldo = (saldoM1 + saldoM2 + saldoM3) / 3;

	switch (tipoJogador) {
		case 1:
			cashback = mediaSaldo * 0.02f;
			break;
		case 2:
			cashback = mediaSaldo * 0.03f;
			break;
		case 3:
			cashback = mediaSaldo * 0.05f;
			break;
		case 4:
			cashback = mediaSaldo * 0.07f;
			break;
		default:
			std::cout << "\nTipo invalido, o programa sera encerrado.";
			exit(0);
	}

	std::cout << "O valor do cashback e de: " << cashback;

	return 0;
}