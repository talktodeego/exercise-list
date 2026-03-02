//Jogo onde o usuario tem que descobrir a palavra secreta, o programa fico em loop até o usuario acertar
#include <iostream>
#include <string>

int main() {

	std::string correctWord = "melancia";
	std::string guessWord;
	bool acertou = false; //flag para parar o loop quando o usuario acertar a palavra

	do {

		std::cout << "Adivinhe a palavra\n";
		std::cin >> guessWord;
	
		//compara o palpite do usuario e se a palavra esta minuscula ou maiuscula
		if ((guessWord == correctWord) || (guessWord == "melancia") || (guessWord == "MELANCIA")) {
			std::cout << "Parabens, voce acertou a palavra secreta";
			//uso da flag para parar o loop
			acertou = true;
		}else {
			std::cout << "Palavra errada, tente novamente\n\n";
		}

	} while (!acertou); //enquanto a flag continuar sendo falsa, ele continua no loop, que so altera o estado quando o usuario acerta a palavra

	return 0;
}
