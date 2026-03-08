#include <iostream>

int main() {
	int itensTotal{ 0 }, userOpt{ 0 };
	float balanceAmount{ 0.0f }, itemPrice{ 0.0f }, totalValue{ 0.0f };
	bool endOps = true;

	//validação para que o valor do saldo seja maior que zero - loop até o usuário informar um valor maior que zero
	do {
		std::cout << "Qual o saldo que voce tem em conta?\n";
		std::cin >> balanceAmount;

		if (balanceAmount <= 0) {
			std::cout << "Por favor, insira um valor maior que zero\n";
		}
	} while (balanceAmount <= 0);



	do {

		//validação para o valor do item ser maior que zero - loop até o usuário informar um valor maior que zero
		do {
			std::cout << "Qual valor do item que voce deseja comprar?\n";
			std::cin >> itemPrice;

			if (itemPrice <= 0) {
				std::cout << "Por favor, insira um valor maior que zero\n";
			}

		} while (itemPrice <= 0);

		//validação do saldo ser inferior ao valor informado pelo usuário, opção para encerrar o programa caso o mesmo queira
		if (balanceAmount < itemPrice) { 
			std::cout << "\nCompra nao realizada, saldo insuficiente. Seu saldo no momento e de: " << balanceAmount << " reais.\n";
			std::cout << "Por favor, insira um valor valido ou digite 0 para encerrar o programa.\n";
			std::cin >> userOpt;
			if (userOpt == 0) {
				endOps = false;
			}
		}else {
			balanceAmount = balanceAmount - itemPrice;
			totalValue += itemPrice;
			
			std::cout << "\nCompra realizada com sucesso! Seu saldo e de: " << balanceAmount << " reais.\n";

			if (balanceAmount <= 0) {
				std::cout << "\nSeu saldo acabou. O resumo final sera exibido agora\n";
				endOps = false;
			}else {
				std::cout << "\nVoce deseja continuar? (1- Sim, 0- Nao)\n";
				std::cin >> userOpt;
			
				if (userOpt == 0) {
					endOps = false;
				}
			}

			itensTotal++;
		}

	} while (endOps);

	std::cout << "\nO total da compra ficou no valor de: " << totalValue << " reais. E o total de itens comprados: " << itensTotal;

	return 0;
}
