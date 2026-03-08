#include <iostream>
#include <ctime>
#include <string>

int main() {
	int i{ 0 }, userWon{ 0 }, cpuWon{ 0 }, userChoice{ 0 }, cpuChoice{ 0 }, tied{ 0 };
	std::string userName, cpuName;
	srand(time(0));

	do {

		do {
			std::cout << "Qual a sua escolha? (1- Papel, 2- Pedra ou 3- Tesoura)\n";
			std::cin >> userChoice;

			if (userChoice <= 0 || userChoice > 3) {
				std::cout << "Por favor, insira uma opcao valida\n";
			}

		} while (userChoice <= 0 || userChoice > 3);

		cpuChoice = (rand() % 3) + 1;

		switch (userChoice) {
		case 1:
			userName = "Papel";
			break;
		case 2:
			userName = "Pedra";
			break;
		case 3:
			userName = "Tesoura";
			break;
		}

		switch (cpuChoice) {
		case 1:
			cpuName = "Papel";
			break;
		case 2:
			cpuName = "Pedra";
			break;
		case 3:
			cpuName = "Tesoura";
			break;
		}

		if (userChoice == cpuChoice) {
			std::cout << "Ambos jogaram " << userName << ". A rodada terminou empatada\n\n";
			tied++;
		}
		else if ((userChoice == 1 && cpuChoice == 2) || (userChoice == 2 && cpuChoice == 3) || (userChoice == 3 && cpuChoice == 1)) {
			std::cout << "O usuario jogou " << userName << " e o computador jogou " << cpuName << ". O usuario venceu a rodada\n\n";
			userWon++;
		}else {
			std::cout << "O usuario jogou " << userName << " e o computador jogou " << cpuName << ". O computador venceu a rodada\n\n";
			cpuWon++;
		}

		i++;

	} while (i < 5);

	std::cout << "\n->RESUMO DA PARTIDA<-\n"
		<< "O usuario venceu: " << userWon << " vezes\n"
		<< "O computador venceu: " << cpuWon << " vezes\n";
	if (tied > 0) {
		std::cout << "Houve " << tied << " empates";
	}

	return 0;
}