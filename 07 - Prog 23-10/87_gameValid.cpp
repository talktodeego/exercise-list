#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand (time(0));
	int rounds{ 0 };
	float userPoints{ 0.0f }, sortPoints{ 0.0f };
	char winLose;

	for (int i = 0; i < 5; i++) {

		do {
			std::cout << "O jogador ganhou ou perdeu pontos? (G- Ganhou ou P- Perdeu)\n";
			std::cin >> winLose;

			winLose = toupper(winLose);

			if (winLose != 'G' && winLose != 'P') {
				std::cout << "\nOpcao invalida, informe apenas usando G ou P\n";
			}

		} while (winLose != 'G' && winLose != 'P');

		switch (winLose) {
		case 'G':
			sortPoints = (rand() % 10) + 1;
			userPoints += sortPoints;
			break;
		case 'P':
			sortPoints = (rand() % 10) + 1;
			userPoints -= sortPoints;
			break;
		}

		std::cout << "\nVoce esta com: " << userPoints << " pontos.\n";
		
	}

	std::cout << "\n->RESUMO DA PONTUACAO<-"
	<< "\nO jogador ficou com um total de: " << userPoints << " pontos.";
}