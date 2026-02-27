#include <iostream>
#include <cstdlib>

int main(){

	float nota1, nota2, nota3, nota4, notaFinal;

	std::cout << "Informe a primeira nota\n";
	std::cin >> nota1;

	std::cout << "\nInforme a segunda nota\n";
	std::cin >> nota2;

	std::cout << "\nInforme a terceira nota\n";
	std::cin >> nota3;

	std::cout << "\nInforme a quarta nota\n";
	std::cin >> nota4;

	notaFinal = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3) + (nota4 * 4)) / 10;

	std::cout << "\nA nota final e de: " << notaFinal;

	return 0;
}

// sempre que falarmos sobre media ponderada a divisao é feita com a soma dos pesos, por exemplo, 1, 2, 3, 4, no total da 10