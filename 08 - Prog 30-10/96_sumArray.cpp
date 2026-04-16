#include <iostream>

int main() {
	int pocket[10], sum{ 0 }, size{ 0 };

	//calcula o tamanho do array, soma os 10 espaços declarados e divide por 4 se for int ou 8 se for double
	size = sizeof(pocket) / sizeof(pocket[0]);

	//for para inserir elementos no array
	for (int i = 0; i < size; i++) {
		std::cout << "Digite um numero para ser inserido no array: \n";
		std::cin >> pocket[i];
	}
	
	//for para mostrar os elementos do array e a soma dele
	for (int j = 0; j < size; j++) {
		std::cout << pocket[j] << " ";
		sum += pocket[j];
	}

	std::cout << "\nE a soma dos elementos e de: " << sum;
}