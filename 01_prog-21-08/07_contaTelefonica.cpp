#include <iostream>
#include <cstdlib>


int main() {
	float min1, min2, min3, taxaPeriodo1, taxaPeriodo2, taxaPeriodo3, valorTotal = 0;

	taxaPeriodo1 = 0.155645;
	taxaPeriodo2 = 0.245645;
	taxaPeriodo3 = 0.354656;

	std::cout << "Quantidade de minutos entre 0h a 7h59: " << std::endl;
	std::cin >> min1;

	std::cout << "Quantidade de minutos entre 8h a 15h59: " << std::endl;
	std::cin >> min2;

	std::cout << "Quantidade de minutos entre 16h a 23h59: " << std::endl;
	std::cin >> min3;

	taxaPeriodo1 *= min1;
	taxaPeriodo2 *= min2;
	taxaPeriodo3 *= min3;

	std::cout << "\nO subtotal referente ao periodo entre 0h as 7h59 e de " << taxaPeriodo1 << std::endl << "\nO subtotal referente ao periodo entre 8h as 15h59 e de " << taxaPeriodo2 << std::endl << "\nO subtotal referente ao periodo entre 16h as 23h59 e de " << taxaPeriodo3 << std::endl;

	valorTotal = taxaPeriodo1 + taxaPeriodo2 + taxaPeriodo3;

	std::cout << "\nO valor total ficou de: " << valorTotal;
	
	return 0;
}

// acertei