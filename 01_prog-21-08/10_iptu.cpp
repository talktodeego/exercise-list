#include <iostream>

int main() {

	float vc, ac, mt, at, impostoPredial, impostoTerritorial, iptu;

	std::cout << "Qual o valor do m2 construido?\n";
	std::cin >> vc;

	std::cout << "\nQual o valor da area construida?\n";
	std::cin >> ac;

	std::cout << "\nQual o valor do m2 do terreno?\n";
	std::cin >> mt;

	std::cout << "\nQual a area do terreno em m2?\n";
	std::cin >> at;

	impostoPredial = vc * ac;
	impostoTerritorial = mt * at;

	iptu = impostoPredial + impostoTerritorial;

	std::cout << "\n->RESUMO DOS IMPOSTOS<-\n";
	std::cout << "\nO imposto predial e de: " << impostoPredial;
	std::cout << "\nO imposto territorial e de: " << impostoTerritorial;
	std::cout << "\nO IPTU e de: " << iptu;

	return 0;

}

// acertei