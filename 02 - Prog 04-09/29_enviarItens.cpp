// Programa calcula quantas flores voce tem, quantas voce quer enviar para um segundo usuário e faz a validação se é possível ou não
#include <iostream>

int main() {

	int qtdFlores{ 0 }, envFlores{ 0 };

	std::cout << "Quantas flores voce tem?\n";
	std::cin >> qtdFlores;

	std::cout << "Quantas flores voce gostaria de enviar?\n";
	std::cin >> envFlores;

	if (qtdFlores >= envFlores) {
		std::cout << "\nParabens, o envio foi concluido com sucesso. Voce ficou com " << qtdFlores - envFlores << " flores restantes.";
	} else {
		std::cout << "\nHouve um erro! O numero desejado a enviar e maior que a quantidade disponivel";
	}

	return 0;
}