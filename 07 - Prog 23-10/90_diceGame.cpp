#include <iostream>
#include <ctime>

int main() {
	int dice{ 0 }, userDice{ 0 }, cpuDice{ 0 }, round{ 5 }, userWon{ 0 }, cpuWon{ 0 }, tied{ 0 };
	srand(time(0));

	for (int i = 0; i < round; i++) {
		userDice = (rand() % 6) + 1;
		cpuDice = (rand() % 6) + 1;

		std::cout << "O numero sorteado para o jogador foi: " << userDice << ". E para a maquina foi: " << cpuDice;

		if (userDice > cpuDice) {
			std::cout << "\nO jogador ganhou\n";
			userWon++;
		}else if (userDice < cpuDice) {
			std::cout << "\nA maquina ganhou\n";
			cpuWon++;
		}else{
			std::cout << "\nDeu empate\n";
			tied++;
		}

	}

	std::cout << "\n->RESULTADO DO JOGO<-\n"
		<< "O jogador venceu: " << userWon << " vezes\n"
		<< "A maquina venceu: " << cpuWon << " vezes";
}