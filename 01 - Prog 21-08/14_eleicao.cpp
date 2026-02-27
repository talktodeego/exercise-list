#include <iostream>
#include <cmath>

int main (){
	float j1, j2, j3, brancos, nulos, total, pj1, pj2, pj3, totalValidos, pBrancos, pNulos;


	std::cout << "Quantos votos o Jogo 1 recebe?\n";
	std::cin >> j1;

	std::cout << "\nQuantos votos o Jogo 2 recebe?\n";
	std::cin >> j2;

	std::cout << "\nQuantos votos o Jogo 3 recebe?\n";
	std::cin >> j3;

	std::cout << "\nQuantos votos em Branco aconteceram?\n";
	std::cin >> brancos;

	std::cout << "\nQuantos votos Anulos aconteceram?\n";
	std::cin >> nulos;

	// total de votos e total de votos validos
	total = j1 + j2 + j3 + brancos + nulos;
	totalValidos = j1 + j2 + j3;

	// porcentagens de votos brancos ou nulos
	pNulos = (nulos / total) * 100;
	pBrancos = (brancos / total) * 100;

	// calculo das porcentagens de votos validos dos jogos
	pj1 = (j1 / totalValidos) * 100;
	pj2 = (j2 / totalValidos) * 100;
	pj3 = (j3 / totalValidos) * 100;

	std::cout << "\n->RESUMO DA VOTACAO<-";
	std::cout << "\nO total de votos e de: " << total;
	std::cout << "\nO total de votos em branco e de: " << brancos << " votos. Tendo uma porcentagem de: " << pBrancos << "%";
	std::cout << "\nO total de votos nulos e de: " << nulos << " votos. Tendo uma porcentagem de: " << pNulos << "%";
	std::cout << "\nO jogo 1 recebeu um total de: " << j1 << " votos. Tendo um total de " << pj1 << "% no total.";
	std::cout << "\nO jogo 2 recebeu um total de: " << j2 << " votos. Tendo um total de " << pj2 << "% no total.";
	std::cout << "\nO jogo 3 recebeu um total de: " << j3 << " votos. Tendo um total de " << pj3 << "% no total.";

	return 0;
}