//Mesmo jogo que o ex anterior, agora o usuário tem 3 chances para acertar a palavra secreta
#include <iostream>
#include <string>

int main() {

	//criacao da string que contem a palavra certa
	std::string correctWord = "melancia";
	std::string guessWord;
	int lifes = 2;
	bool acertou = false; 

	do {

		std::cout << "Adivinhe a palavra\n";
		std::cin >> guessWord;

		if ((guessWord == correctWord) || (guessWord == "melancia") || (guessWord == "MELANCIA")) {
			std::cout << "Parabens, voce acertou a palavra secreta";
			acertou = true;
		}else {
			//Verifica se o jogador ainda tem vidas, se sim, printa a msg e substrai uma vida, caso contrário printa a msg e sai do loop
			if (lifes > 0) {
				std::cout << "Palavra errada! Voce tem " << lifes << " vidas\n\n";
				lifes--;
			}
			else {
				std::cout << "Palavra errada! Voce ficou sem vida\n";
				lifes--;
			}

		}

	} while (!acertou && lifes >= 0);

	if (!acertou) {
		std::cout << "\n<- FIM DE JOGO ->";
		std::cout << "\nA palavra era: " << correctWord << "\n";
	}

	return 0;
}
