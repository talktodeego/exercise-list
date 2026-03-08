#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(time(0));
	int answer{ 0 }, numOne{ 0 }, numTwo{ 0 }, question{ 0 }, correct{ 0 }, wrong{ 0 };

	for (int i = 0; i < 5; i++) {
		numOne = (rand() % 10) + 1;
		numTwo = (rand() % 10) + 1;

		std::cout << numOne << " * " << numTwo << " = ";
		std::cin >> answer;

		question = numOne * numTwo;

		if (answer == question) {
			std::cout << "\nParabens, voce acertou!\n";
			correct++;
		}else {
			std::cout << "\nVoce errou!\n";
			wrong++;
		}
	}

	std::cout << "\n->RESUMO DO JOGO<-"
		<< "\nO JOGADOR ACERTOU: " << correct << " perguntas.\n"
		<< "O JOGADOR ERROU: " << wrong << " perguntas.";
}