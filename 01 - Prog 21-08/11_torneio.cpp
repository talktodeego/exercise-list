#include <iostream>

int main() {

	float vit{ 0 }, emp{ 0 }, pts{ 0 };

	std::cout << "Quantas vitorias a equipe conseguiu?\n";
	std::cin >> vit;

	std::cout << "\nQuantos empates a equipe teve?\n";
	std::cin >> emp;

	pts = (vit * 3) + (emp * 1);

	std::cout << "\nO total de pontos que a equipe conseguiu foi de: " << pts;

	return 0;
}

// tinha acertado porem a logica do exercicio tava errada, era 3pts e nao 4pts.