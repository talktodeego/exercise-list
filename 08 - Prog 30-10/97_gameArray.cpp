#include <iostream>
#include <string>
#include <cctype>

int main() {
	int coins[10], size{ 0 }, turn{ 0 }, totalAmount{ 0 };
	char move[10], inputMove;
	std::string moveName, roundState;


	size = sizeof(move) / sizeof(move[0]);

	//for onde acontece o programa
	for (int i = 0; i < size; i++) {

		do {
			std::cout << "\nQual movimento voce fara? (W- frente, A- esquerda, S- tras ou D- direita)?\n";
			std::cin >> inputMove;
			inputMove = (char)toupper(inputMove);
			move[i] = inputMove;

			if (inputMove != 'W' && inputMove != 'A' && inputMove != 'S' && inputMove != 'D') {
				std::cout << "\nEntrada invalida, tente novamente\n";
			}	

		} while (inputMove != 'W' && inputMove != 'A' && inputMove != 'S' && inputMove != 'D');

		std::cout << "\nVoce ganhou ou perdeu moedas? (Informe um numero positivo para ganho e negativo para perda)\n";
		std::cin >> coins[i];

	}

	//guarda o valor total de moedas
	for (int k = 0; k < size; k++) {
		totalAmount += coins[k];
	}

	std::cout << "\n->RESUMO DA GAMEPLAY<-\n";

	for (int j = 0; j < size; j++) {
		if (coins[j] > 0) {
			roundState = "Ganhou";
		}
		else if (coins[j] == 0) {
			roundState = "Rodada nula";
		}
		else {
			roundState = "Perdeu";
		}

		switch (move[j]) {
		case 'W':
			moveName = "Frente";
			break;
		case 'A':
			moveName = "Esquerda";
			break;
		case 'S':
			moveName = "Tras";
			break;
		case 'D':
			moveName = "Direita";
			break;
	}

		std::cout << "Rodada " << turn + 1 << " - " << moveName << " - " << roundState << " - " << coins[j] << " moedas.\n";
		turn++;
	}

	std::cout << "\nO valor total que o usuario ficou foi de: " << totalAmount << " moedas.";

	return 0;
}