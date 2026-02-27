#include <iostream>

int main() {

	float vit{ 0 }, emp{ 0 }, der{ 0 }, pts{ 0 }, totalpts{ 0 }, totalJogos{ 0 }, apr{ 0 };

	std::cout << "Quantas vitorias a equipe teve? \n";
	std::cin >> vit;

	std::cout << "Quantas empates a equipe teve? \n";
	std::cin >> emp;

	std::cout << "Quantas derrotas a equipe teve? \n";
	std::cin >> der;

	totalJogos = vit + emp + der;
	
	totalpts = totalJogos * 3;

	pts = (vit * 3) + (emp * 1);

	apr = (pts / totalpts) * 100;

	std::cout << "\n->RESUMO DE DESEMPENHO<-";
	std::cout << "\nO desempenho da equipe foi de: " << vit << " vitorias";
	std::cout << "\nO desempenho da equipe foi de: " << emp << " empates";
	std::cout << "\nO desempenho da equipe foi de: " << der << " derrotas";
	std::cout << "\nConquistando um total de : " << pts << " pontos";
	std::cout << "\nO aproveitamento da equipe foi de: " << apr << "%";

	return 0;
}

//sofri um pouco para entender a logica