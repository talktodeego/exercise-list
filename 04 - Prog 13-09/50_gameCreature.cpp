//Jogo onde a criatura sobrevive se a temp for entre 18 e 25 e a umidade do ar for de 30% a 80%. O usuario insere as info e o calculo e feito dentro do if, onde é o obrigatório o uso de operadores lógicos a pedido do professor
#include <iostream>

int main() {

	int air{ 0 };
	float temp{ 0.0f };

	std::cout << "Qual a temperatura no momento?\n";
	std::cin >> temp;

	std::cout << "\nQual a umidade relativa do ar?\n";
	std::cin >> air;

	//Faz a comparação para ver se a temp esta entre 18-25 e a umidade entre 30-80 para a sobrevivencia da criatura, caso contrário ela não sobrevive
	if ((temp >= 18 && temp <= 25) && (air >= 30 && air <= 80)) {
		std::cout << "A criatura esta viva";
	}else {
		std::cout << "A criatura nao resistiu";
	}

	return 0;
}