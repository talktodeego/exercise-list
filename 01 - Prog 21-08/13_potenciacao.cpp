#include <iostream>
#include <cmath> // biblioteca matematica

int main() {
	
	float raio{ 0 }, raioConvertido{0}, a{0};
	const float pi = 3.141592;

	std::cout << "Qual o raio da circunferencia em metros?\n";
	std::cin >> raio;

	a = pi * pow(raio, 2); //potenciação em c++, pow(base, expoente)

	std::cout << "A area da circunferencia e: " << a << " metros quadrados\n";

	return 0;

}

// para fazer a potenciação em C++ é necessário incluir a biblioteca cmath e usar a função pow(base, expoente). No exemplo acima, a função pow é usada para calcular o quadrado do raio (raio elevado a 2) para determinar a área da circunferência.