#include <iostream>
#include <cctype>

int main() {
	int age{ 0 }, qtdMen{ 0 }, qtdWomen{ 0 }, totalPlayers{ 0 }, userOpt{ 0 };
	float averageAge{ 0.0f }, womenAge{ 0.0f }, menAge{ 0.0f }, averageMen{ 0.0f }, averageWomen{ 0.0f };
	char genre;
	bool endProg = true;

	//loop até o usuário digitar 0, que muda o estado da flag e encerra esse bloco
	do {

		//validação se o usuário esta adicionando uma idade valida, setei para ficar entre 1 e 100
		do {
			std::cout << "Digite a idade do jogador:\n";
			std::cin >> age;
			if (age <= 0 || age > 100) {
				std::cout << "\nIdade invalida, informe uma idade valida\n";
			}
		} while (age <= 0 || age > 100);

		//validação se o usuário esta adicionar H ou M, validando se esta informando uma opção valida e transformando o input para letra maiusculo usando toupper
		do {
			std::cout << "\nDigite o genero do jogador (H- Homem ou M- Mulher)\n";
			std::cin >> genre;

			genre = toupper(genre);

			if (genre != 'H' && genre != 'M') {
				std::cout << "\nGenero invalido, informe se e H- HOMEM ou M- MULHER)\n";
			}
		} while (genre != 'H' && genre != 'M');

		switch (genre) {
		case 'H':
			menAge += age;
			qtdMen++;
			break;
		case 'M':
			womenAge += age;
			qtdWomen++;
			break;
		}

		//validação se o usuário quer continuar a adicionar mais pessoas e também valida se esta digitando uma opção valida
		do {
			std::cout << "\nVoce deseja adicionar mais jogadores? (1- SIM ou 0- NAO)\n";
			std::cin >> userOpt;
			if (userOpt == 0) {
				endProg = false;
			}
		} while (userOpt != 1 && userOpt != 0);


	} while (endProg);

	//calculo para numero total de players
	totalPlayers = qtdMen + qtdWomen;


	//calculo para idade media dos homens e evita divisão por 0
	if (qtdMen > 0) {
		averageMen = menAge / qtdMen;	
	}else {
		averageMen = 0;
	}

	//calculo para idade media das mulheres e evita divisão por 0
	if (qtdWomen > 0) {
		averageWomen = womenAge / qtdWomen;
	}else {
		averageWomen = 0;
	}

	//calculo para idade media de todos os jogadores e evita divisão por 0
	if (totalPlayers > 0) {
		averageAge = (menAge + womenAge) / totalPlayers;
	}

	//imprime os resultados do programa
	std::cout << "\n->RESUMO DOS JOGADORES<-\n"
	<< "TOTAL DE HOMENS: " << qtdMen
	<< "\nIDADE MEDIA DOS HOMENS: " << averageMen
	<< "\nTOTAL DE MULHERES: " << qtdWomen
	<< "\nIDADE MEDIA DAS MULHERES: " << averageWomen
	<< "\nQUANTIDADE TOTAL DE JOGADORES: " << totalPlayers
	<< "\nIDADE MEDIA DOS JOGADORES: " << averageAge;

	return 0;
}