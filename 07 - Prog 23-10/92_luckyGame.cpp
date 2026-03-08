#include <iostream>
#include <ctime>

int main() {
	srand(time(0));
	int num{ 0 }, won{ 0 };

	for (int i = 0; i < 10; i++) {
		num = (rand() % 100) + 1;

		if (num % 7 == 0) {
			std::cout << "O numero sorteado foi: " << num << ". Parabens, voce teve sorte!\n";
			won++;
		}else {
			std::cout << "Que azar, o numero sorteado foi: " << num << ", voce nao teve sorte\n";
		}
	}

	if (won > 0) {
		std::cout << "\nVoce tirou a sorte " << won << " vezes.";
	}else {
		std::cout << "\nInfelizmente voce nao teve sorte dessa vez";
	}
}