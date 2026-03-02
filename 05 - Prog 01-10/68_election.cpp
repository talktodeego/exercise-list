//Simula uma eleição com três candidatos, qualquer voto diferente de 1, 2 ou 3 cai na variável nullVote, que é voto nulo. No final retorna o resultado da eleição
#include <iostream>

int main() {
	int candOne{ 0 }, candTwo{ 0 }, candThree{ 0 }, nullVote{ 0 }, choice{ 0 };

		for (int voters = 0; voters < 10; voters++) {

			std::cout << "Em qual candidato voce escolhe? (1- Candidato um, 2- Candidato dois ou 3- Candidato tres?)\n";
			std::cin >> choice;

			switch (choice) {
			case 1:
				candOne++;
				break;
			case 2:
				candTwo++;
				break;
			case 3:
				candThree++;
				break;
			default:
				nullVote++;
				break;
			}
		}	


	std::cout << "\n->CONTAGEM DOS VOTOS<-\n"
		<< "Candidato Um: " << candOne << " votos\n"
		<< "Candidato Dois: " << candTwo << " votos\n"
		<< "Candidato Tres: " << candThree << " votos\n"
		<< "Votos invalidos: " << nullVote << " votos\n";

	return 0;
}