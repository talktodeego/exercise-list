#include <iostream>
#include <ctime>

int main() {

	srand(time(0));
	int board[22], userDice{ 0 }, coins{ 10 }, userPos{ 1 }, turn{ 5 }, size{ 0 }, trap{ 0 }, coinsTable{ 0 };
	bool trapCond = false;
	bool win = false;

	size = sizeof(board) / sizeof(board[0]);
	trap = (rand() % 21) + 1; //armadilha

	for (int i = 0; i < size; i++) {

		board[i] = (rand() % 21) - 10; //sorteia os valores de cada casa do tabuleiro
		//std::cout << board[i] << std::endl; imprime o tabuleiro
	}

	std::cout << "======JOGO INICIADO======\n";
	std::cout << "Voce esta na casa " << userPos << " e tem " << coins << " moedas\n";

	for (int j = 0; j < turn; j++) {

		userDice = (rand() % 5) + 1;
		std::cout << "\nO numero sorteado foi " << userDice << std::endl;
		userPos += userDice;

		if (userPos >= 21) {
			userPos = 21;
			win = true;
			std::cout << "Voce alcancou a ultima casa!" << std::endl;
			break;
		}

		if (userPos == trap) {
			std::cout << "Que azar, a armadilha estava na casa que o jogador se moveu";
			trapCond = true;
			coins = 0;
			break;
		}

		coins += board[userPos];
		std::cout << "Voce caiu na casa " << userPos << std::endl;

	}

	std::cout << "\n\n============================\n";

	if (trapCond) {
		std::cout << "GAME OVER: Voce caiu na armadilha";
	}else {
		std::cout << "VITORIA: Voce sobreviveu ao tabuleiro;";
	}

	std::cout << "\nSALDO FINAL: " << coins << " moedas";
	std::cout << "\n============================\n";

	return 0;



}