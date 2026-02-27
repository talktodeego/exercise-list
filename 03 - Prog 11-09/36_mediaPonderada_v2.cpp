// O programa recebe as notas e frequencia que o usuario informa, calcula a média ponderada e no final calcula se o aluno é elegível a ter uma bonificação de nota caso a frequencia esteja acima de 75
#include <iostream>
#include <cstdlib>

int main(){

    int freq{ 0 };
    float nota1{ 0.0f }, nota2{ 0.0f }, nota3{ 0.0f }, nota4{ 0.0f }, media{ 0.0f };

    std::cout << "Qual a primeira nota?\n";
    std::cin >> nota1;

    std::cout << "\nQual a segunda nota?\n";
    std::cin >> nota2;
    
    std::cout << "\nQual a terceira nota?\n";
    std::cin >> nota3;
    
    std::cout << "\nQual a quarta nota?\n";
    std::cin >> nota4;
    
    std::cout << "\nQual o percentual de frequencia do aluno?\n";
    std::cin >> freq;

    media = (nota1 + nota2 * 2 + nota3 * 3 + nota4 * 4) / 10;


    if (freq >= 75 && freq <= 80) {
        media *= 1.05f;
    } else if (freq >= 81 && freq <= 95) {
        media *= 1.08f;
    } else if (freq > 95) {
        media *= 1.1f;
    } else {
        std::cout << "A presenca foi abaixo do limite, entao a nota nao teve bonificacao. Sua media e " << media;
        exit(0);
    }

    std::cout << "\nA media e " << media;

    return 0;
}