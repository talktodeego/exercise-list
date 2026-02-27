//Programa calcula a distância percorrida pelo o usuário e cobra a tarifa de acordo, se for acima de 100 é um valor, se for igual ou menor que 100 é um outro valor
#include <iostream>

int main() {

	float pp{ 2.5f }, pd{ 3.5f }, km{ 0.0f }, valor{ 0.0f };

	std::cout << "Qual foi a distancia percorrida?\n";
	std::cin >> km;

	if (km > 100) {
		valor = km * pd;
	} else {
		valor = km * pp;
	}

	std::cout << "\nA distancia percorrida foi de: " << km << " km e o valor a ser pago e de: " << valor;

	return 0;
}