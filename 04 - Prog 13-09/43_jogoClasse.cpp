//Pede ao usuário que escolha qual classe ele pertence, a quantidade de pontos e faz o calculo de pontos bonus de acordo com a classe escolhida
#include <iostream>
#include <cstdlib>

int main() {

	int classPlayer{ 0 };
	float classPoints{ 0.0f }, pointsPlus{ 0.0f };

	//pede e recebe a info do usuario em relacao a classe do personagem
	do {
		std::cout << "\nQual a classe do personagem? (1- Alfa, 2- Beta e 3- Gama)\n";
		std::cin >> classPlayer;

		if (classPlayer < 1 || classPlayer > 3) {
			std::cout << "\nOpcao invalida! Por favor escolha uma opcao valida.\n";
		}

	} while (classPlayer < 1 || classPlayer > 3);

	//pede e recebe a info do usuario em relacao a pontuacao do usuario
	do {
		std::cout << "Quantos pontos o personagem tem?\n";
		std::cin >> classPoints;

		if (classPoints < 0) {
			std::cout << "\nPontuacao invalida, por favor tente novamente\n";
		}

	} while (classPoints < 0);


	//switch para armazenar a variavel contendo o valor de acordo com a classe que o usuario selecionar
	switch (classPlayer) {
	case 1:
		pointsPlus = 0.05f;
		break;
	case 2:
		pointsPlus = 0.07f;
		break;
	case 3:
		pointsPlus = 0.1f;
		break;
	}

	//calcula o total de pontos bonus
	pointsPlus = classPoints * pointsPlus;

	//informa o usuario a quantidade de pontos bonus e o total de pontos que o personagem ficou
	std::cout << "\n->RESULTADO DO BONUS<-\nO jogador recebera: " << pointsPlus << " pontos de premio.\n" << "O jogador ficou com um total de " << classPoints + pointsPlus << " pontos";

	return 0;

}
