// O programa calcula o iptu de acordo com as informações inseridas pelo o usuário e faz um calculo extra caso o imóvel seja residencial ou não.
#include <iostream>

int main() {

	float vc{ 0.0f }, ac{ 0.0f }, mt{ 0.0f }, at{ 0.0f }, impostoPredial{ 0.0f }, impostoTerritorial{ 0.0f }, iptu{ 0.0f }, aumentoIptu{ 0.0f };
	char tipo;

	std::cout << "Qual o valor do m2 construido?\n";
	std::cin >> vc;

	std::cout << "\nQual o valor da area construida?\n";
	std::cin >> ac;

	std::cout << "\nQual o valor do m2 do terreno?\n";
	std::cin >> mt;

	std::cout << "\nQual a area do terreno em m2?\n";
	std::cin >> at;

	std::cout << "O imovel e do tipo residencial ou nao? (S/N)";
	std::cin >> tipo;

	impostoPredial = vc * ac;
	impostoTerritorial = mt * at;

	iptu = impostoPredial + impostoTerritorial;

	std::cout << "\n->RESUMO DOS IMPOSTOS<-\n";
	std::cout << "\nO imposto predial e de: " << impostoPredial;
	std::cout << "\nO imposto territorial e de: " << impostoTerritorial;

	if (tipo == 's' || tipo == 'S') {
		aumentoIptu = iptu * 0.1f; // 
		iptu += aumentoIptu;
		std::cout << "\nO aumento no valor total do IPTU foi de: " << aumentoIptu;
	}

	std::cout << "\nO IPTU e de: " << iptu;

	return 0;

}