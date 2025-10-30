#include <iostream>
#include <vector>

int main() {
    const int TAMANHO = 20;
    std::vector<int> vetor(TAMANHO);
    int pares = 0;
    int impares = 0;

    std::cout << "--- Contagem de Números Pares e Ímpares ---\n";
    std::cout << "Digite " << TAMANHO << " números inteiros:\n";

    
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];

        
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    
    std::cout << "\nOs elementos do vetor são: ";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << vetor[i] << (i < TAMANHO - 1 ? ", " : "");
    }
    std::cout << "\n";

    std::cout << "Quantidade de números pares: " << pares << "\n";
    std::cout << "Quantidade de números ímpares: " << impares << "\n";

    return 0;
}