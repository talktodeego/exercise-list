#include <iostream>
#include <ctime>

int main() {
	srand(time(0));
	int password{ 0 }, passwordLength{ 0 };

	do {
		std::cout << "Qual o tamanho da senha? ";
		std::cin >> passwordLength;

		if (passwordLength <= 4) {
			std::cout << "Por favor, a senha deve conter 5 ou mais numeros, tente novamente\n";
		}
	} while (passwordLength <= 4);

	for (int i = 0; i < passwordLength; i++) {
		password = (rand() % 10);
		std::cout << password;
	}
}