#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(time(0));
	int rounds{ 0 }, sortCPU{ 0 }, wonRounds{ 0 }, lostRounds{ 0 };
	char winLose;

	for (int i = 0; i < 5; i++) {

		sortCPU = (rand() % 2);

		if (sortCPU == 0) {
			std::cout << "Voce perdeu!\n";
			lostRounds++;
		}else {
			std::cout << "Voce Ganhou!\n";
			wonRounds++;
		}
	}

	std::cout << "\n->RESUMO DA PONTUACAO<-"
		<< "\nO jogador ganhou: " << wonRounds << " rodadas."
		<< "\nO jogador perdeu: " << lostRounds << " rodadas.";
}