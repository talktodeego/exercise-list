#include <iostream>
#include <cstdlib>
#include <string>

int main() {
	int number{ 0 };
	std::string answer = "*";

	do {
		std::cout << "Informe um numero\n";
		std::cin >> number;
	} while (number <= 0);

	for (int i = 0; i < number; i++) {
		std::cout << answer;
	}
	
}