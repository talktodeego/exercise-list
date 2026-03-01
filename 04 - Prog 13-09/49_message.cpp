//Programa que pede um numero e imprime uma mensagem de acordo com a resposta do usuário. OBRIGATÓRIO O USO DE OPERADOR LÓGICO NESSE EXÉRCICIO A PEDIDO DO PROFESSOR
#include <iostream>

int main() {

	int number{ 0 };

	std::cout << "Digite um numero: \n";
	std::cin >> number;

	if (number == 1 || number == 3 || number == 4 || number == 6) {
		std::cout << "PRIMEIRA";
	}
	else if (number == 2 || number == 5) {
		std::cout << "SEGUNDA";
	}
	else {
		std::cout << "TERCEIRA";
	}

	return 0;
}