#include <iostream>

int main() {
	int num{ 0 }, sum{ 0 }, i{ 0 };

	while (i < 10) {
		std::cout << "Digite um numero: \n";
		std::cin >> num;

		//calcula se o numero informado é par
		if (num % 2 == 0) {
			sum += num;
		}
		i++;
	}

	std::cout << "A soma total e de: " << sum;

	return 0;
}