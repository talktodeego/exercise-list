// Mais uma versão do programa de calculo de IPTU, que agora faz o calculo de até 4 imóveis diferentes, utilizando o switch para armazenar as porcentagens do iptu
#include <iostream>
#include <cstdlib>

int main() {

	float vc{ 0.0f }, ac{ 0.0f }, mt{ 0.0f }, at{ 0.0f }, impostoPredial{ 0.0f }, impostoTerritorial{ 0.0f }, iptu{ 0.0f }, aumentoIptu{ 0.0f };
	int tipo{ 0 }, taxa{ 0 };

	std::cout << "Qual o valor do m2 construido?\n";
	std::cin >> vc;

	std::cout << "\nQual o valor da area construida?\n";
	std::cin >> ac;

	std::cout << "\nQual o valor do m2 do terreno?\n";
	std::cin >> mt;

	std::cout << "\nQual a area do terreno em m2?\n";
	std::cin >> at;

	std::cout << "Qual o tipo do imovel? (1- Residencial, 2- Comercial, 3- Industrial, 4- Outros)\n";
	std::cin >> tipo;

	impostoPredial = vc * ac;
	impostoTerritorial = mt * at;

	iptu = impostoPredial + impostoTerritorial;

	switch (tipo) {
	case 1:
		taxa = 0.01f;
		break;
	case 2:
		taxa = 0.02f;
		break;
	case 3:
		taxa = 0.03f;
		break;
	case 4:
		taxa = 0.04f;
		break;
	default:
		std::cout << "Opcao invalida! O programa sera encerrado";
		exit(0);
	}

	aumentoIptu = iptu * taxa;
	iptu += aumentoIptu;

	std::cout << "\n->RESUMO DOS IMPOSTOS<-\n";
	std::cout << "\nO imposto predial e de: " << impostoPredial;
	std::cout << "\nO imposto territorial e de: " << impostoTerritorial;
	std::cout << "\nO aumento no valor total do IPTU foi de: " << aumentoIptu;
	std::cout << "\nO IPTU e de: " << iptu;

	return 0;

}