#include <iostream>
#include <string>
#include <cctype>


//funcao que faz a validacao se é caracteres ou numerais
bool isWord(std::string text) {
	for (char c : text) {
		if (!std::isalpha(c)) {
			return false;
		}
	}
	return true;
}

int main() {
	int size{ 0 }, countWin{ 0 }, countWrong{ 0 };
	std::string arrA[10], word;
	bool wordValidator = false; //flag para validar a resposta do usuario


	size = sizeof(arrA) / sizeof(arrA[0]);

	for (int i = 0; i < size; i++) {
		do {
			std::cout << "Informe a " << i + 1 << " palavra (nao inserir numerais): ";
			std::cin >> (arrA[i]);


			//se NAO for palavra, retorna a msg de erro
			if (!isWord(arrA[i])) {
				std::cout << "\nPor favor, informe uma palavra valida! (A-Z): \n";
			}

		} while (!isWord(arrA[i]));
	}

	do {

		//reseta a flag para uma nova tentativa
		wordValidator = false;

		std::cout << "\nDigite uma palavra para verificar se esta no nosso banco de dados (digite SAIR caso queira encerrar o programa): ";
		std::cin >> word;

		if (word == "SAIR") {
			break;
		}

		//percorre o array verificando a word e caso encontre a flag muda para true
		for (int j = 0; j < size; j++) {
			if (arrA[j] == word) {
				wordValidator = true;
				break;
			}
		}

		if (wordValidator) {
			std::cout << "Parabens, voce achou a palavra";
			countWin++;
		}else {
			std::cout << "Infelizmente voce nao achou a palavra";
			countWrong++;
		}
	} while (word != "SAIR");

	std::cout << "\n======RESUMO======\n"
		<< "Numero de acertos: " << countWin
		<< "\nNumero de erros: " << countWrong;

	return 0;
}