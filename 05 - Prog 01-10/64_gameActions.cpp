#include <iostream>
#include <cctype>//biblioteca para usar o tolower

int main() {

	int lifes{ 5 }, coins{ 1000 };
	float points{ 0.0f };
	char action;

	do {
		std::cout << ">-RELATORIO DO JOGADOR<-\n"
		<< "O jogador tem " << lifes << " vidas, \n"
		<< "Total de pontos " << points << ".\n"
		<< "E " << coins << " moedas.\n";

		std::cout << "\nO que voce deseja fazer? (W- andar para frente, A- andar para a esquerda, S- andar para tras ou D- andar para a direita?)\n";
		std::cin >> action;

		switch (tolower(action)) {
		case 'w':
			points += 10;
			coins += 500;
			break;
		case 'a':
			points -= 5;
			coins -= 100;
			break;
		case 's':
			points += 100;
			lifes += 1;
			break;
		case 'd':
			points -= 50;
			lifes -= 1;
			break;
		default:
			std::cout << "\nOpcao invalida. Tente novamente com uma opcao valida\n\n";
			break;
		}

		//se pontos/moedas ficarem negativos, o programa reseta para valor 0
		if (points < 0) {
			points = 0;
		}

		if (coins < 0) {
			coins = 0;
		}

	} while (lifes > 0);

		std::cout << "\n->GAME OVER<-\n"
		<< "Acabaram suas vidas";

		return 0;
}
