#include <iostream>
using namespace std;

int main() {

	float num1, num2, resultado = 0, memoria = 0;
	char op;

	cout << "\nDigite um numero: ";
	cin >> num1;

	do {

		cout << "Digite um numero: ";
		cin >> num2;

		cout << "Qual operacao voce quer realizar? (+) Soma, (-) Subtracao, (*) Multiplicacao ou (/) Divisao?\n";
		cin >> op;

		switch (op) {
		case '+':
			resultado = num1 + num2;
			break;
		case '-':
			resultado = num1 - num2;
			break;
		case '*':
			resultado = num1 * num2;
			break;
		case '/':
			resultado = num1 / num2;
			break;
		default:
			if (op != '+' || op != '-' || op != '*' || op != '/') {
				cout << "Opcao invalida!";
			}
		}

		cout << "O resultado da operacao e " << resultado << endl;
		
		num1 = resultado;



	} while (op == '+' || op == '-' || op == '*' || op == '/');

	return 0;
}