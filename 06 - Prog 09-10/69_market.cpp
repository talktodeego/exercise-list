#include <iostream>

int main() {
	
	int qtdProduct{ 0 }, option{ 0 };
	float valueProduct{ 0.0f }, valueTotal{ 0.0f };
	bool endProg = true; //flag para encerrar o programa

	do {

		std::cout << "Voce quer passar suas compras? (1- SIM, 0- NAO)\n";
		std::cin >> option;

		if (option == 0) {
			endProg = false; //se o usuário digitar 0, a flag muda para false e encerra o programa
			std::cout << "\nDesligando a maquina\n";
		}else {  //caso o usuario digite 1, a flag continua true e o programa continua rodando
			std::cout << "\nInforme a quantidade do produto:\n";
			std::cin >> qtdProduct;

			std::cout << "\nInforme o valor do produto:\n";
			std::cin >> valueProduct;

			valueTotal += (valueProduct * qtdProduct); //soma a quantidade * valor e salva o valor

			std::cout << "O subtotal ate o momento e de: " << valueTotal << std::endl;
		}

	} while (endProg);

	std::cout << "\n>-------------------------<\n"
	<< "O valor total da sua compra foi de: " << valueTotal;

	return 0;
}