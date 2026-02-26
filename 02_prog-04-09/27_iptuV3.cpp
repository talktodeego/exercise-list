// Uma nova versão do programa que calcula IPTU. Nessa versão adicionei que se o imóvel NÃO for residencial o aumento é de 10%, caso contrário o aumento é de 5%
#include <iostream>
#include <cstdlib>

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

	std::cout << "O imovel e do tipo residencial ou nao? (S/N)\n";
	std::cin >> tipo;

	impostoPredial = vc * ac;
	impostoTerritorial = mt * at;

	iptu = impostoPredial + impostoTerritorial;

	if (tipo == 's' || tipo == 'S') {
		aumentoIptu = iptu * 0.05f; // calcula 5% sobre o iptu do imovel pois ele é residencial
		iptu += aumentoIptu;
	}
	else if (tipo == 'n' || tipo == 'N') {
		aumentoIptu = iptu * 0.1f; // calcula 10% sobre o iptu do imovel pois ele não é residencial
		iptu += aumentoIptu;
	}
	else {
		std::cout << "Opcao Invalida\nPrograma encerrado";
		exit(0); // encerra o programa pois o usuário inseriu uma opção inválida
	}

	std::cout << "\n->RESUMO DOS IMPOSTOS<-\n";
	std::cout << "\nO imposto predial e de: " << impostoPredial;
	std::cout << "\nO imposto territorial e de: " << impostoTerritorial;
	std::cout << "\nO aumento no valor total do IPTU foi de: " << aumentoIptu;
	std::cout << "\nO IPTU e de: " << iptu;

	return 0;

}