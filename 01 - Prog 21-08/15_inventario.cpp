#include <iostream>
#include <cmath>

int main() {
	float flores, valorFlores, invFlores, invClavas, clavas, valorClavas, invEscudos, escudos, valorEscudos, valorInventario;

	std::cout << "Quantas flores voce deseja pegar?\n";
	std::cin >> flores;

	std::cout << "Qual o valor das flores?\n";
	std::cin >> valorFlores;

	std::cout << "Quantas claves voce deseja pegar?\n";
	std::cin >> clavas;

	std::cout << "Qual o valor das clavas?\n";
	std::cin >> valorClavas;

	std::cout << "Quantas escudos voce deseja pegar?\n";
	std::cin >> escudos;

	std::cout << "Qual o valor dos escudos?\n";
	std::cin >> valorEscudos;

	//faz o calculo entre quantidade e valores dos itens
	invFlores = flores * valorFlores;
	invClavas = clavas * valorClavas;
	invEscudos = escudos * valorEscudos;

	// adiciona o valor total do inventario a variavel
	valorInventario = invFlores + invClavas + invEscudos;

	std::cout << "\n->INVENTARIO<-\n";
	std::cout << "Total de flores: " << flores << ", no valor de: " << valorFlores;
	std::cout << "\nTotal de clavas: " << clavas << ", no valor de: " << valorClavas;
	std::cout << "\nTotal de escudos: " << escudos << ", no valor de: " << valorEscudos;
	std::cout << "\nE o valor total do inventario e de: " << valorInventario;

	return 0;

}