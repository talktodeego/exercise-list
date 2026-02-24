#include <iostream>

int main() {
	
	float precoJogo, impostos, margemLoja, precoVenda = 0;

	std::cout << "Qual o preco base do jogo? \n";
	std::cin >> precoJogo;

	impostos = precoJogo * 0.35;
	margemLoja = (precoJogo + impostos) * 0.10;

	precoVenda = precoJogo + impostos + margemLoja;

	std::cout << "\n->Resumo dos valores<-\n";
	std::cout << "Valor dos impostos: " << impostos << std::endl;
	std::cout << "Valor de margem para a loja: " << margemLoja << std::endl;
	std::cout << "Preco de venda do jogo: " << precoVenda;

	return 0;
}

// acertei - sempre que mexer com porcentagem nao precisa fazer como fiz anteriormente precoJogo * 35 / 100, pode fazer direto como precoJogo * 0.35