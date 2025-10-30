#include <iostream>
#include <vector>
#include <numeric> 

int main() {
    const int TAMANHO = 10;
    std::vector<int> vetor(TAMANHO);
    long long soma = 0; 

    std::cout << "--- Soma dos Elementos de um Vetor ---\n";
    std::cout << "Digite " << TAMANHO << " números inteiros:\n";

    
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
        soma += vetor[i]; 
    }

    std::cout << "\nOs elementos do vetor são: ";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << vetor[i] << (i < TAMANHO - 1 ? ", " : "");
    }
    std::cout << "\n";

    std::cout << "A soma de todos os elementos é: " << soma << "\n";

    return 0;
}