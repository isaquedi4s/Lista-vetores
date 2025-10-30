#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
    const int TAMANHO = 15;
    std::vector<int> vetor(TAMANHO);

    std::cout << "--- Maior e Menor Valor em um Vetor ---\n";
    std::cout << "Digite " << TAMANHO << " números inteiros:\n";


    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for (int i = 1; i < TAMANHO; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    std::cout << "\nOs elementos do vetor são: ";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << vetor[i] << (i < TAMANHO - 1 ? ", " : "");
    }
    std::cout << "\n";

    std::cout << "O maior valor armazenado é: " << maior << "\n";
    std::cout << "O menor valor armazenado é: " << menor << "\n";

    return 0;
}