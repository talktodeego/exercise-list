//Programa calcula a quantidade de bolas extras de acordo com a fase que o usuario esta, 20-40 = 10%, 0-19 e 41-100 = 5%
#include <iostream>

int main() {

	int levels{ 0 };
	float tax{ 0.05f }, glassBall{ 0.0f }, bonusBall{ 0.0f };

	//controla a entrada da fase que o usuario esta, se for maior que 100 ou 0/negativo, fica no loop aguardando uma entrada valida
	do {

		std::cout << "Em qual fase voce esta?\n";
		std::cin >> levels;

		if (levels <= 0 || levels > 100) {
			std::cout << "Fase invalida, digite um numero entre 1 e 100\n\n";
		}
	} while (levels <= 0 || levels > 100);


	//controla a entrada da quantidade bolas, se for menor que zero, repete o loop
	do {

		std::cout << "Quantas bolas de vidro voce tem?\n";
		std::cin >> glassBall;

		if (glassBall < 0) {
			std::cout << "Erro, nao e possivel ter quantidade negativa\n\n";
		}

	} while (glassBall < 0);


	//ajusta o valor da taxa para 10% caso for 20 ou 40 a fase que o usuario esta
	if (levels >= 20 && levels <= 40) {
		tax = 0.1f;
	} 

	//calculo de bolas bonus
	bonusBall = glassBall * tax;

	//saida com o resultado mostrando a fase, quantidade de bolas bonus e quantidade total de bolas que o usuario tem
	std::cout << "Voce esta na fase: " << levels << "\nGanhou um bonus de " << bonusBall << " bolas.\nE tem um total de " << bonusBall + glassBall << " bolas";

	return 0;
}