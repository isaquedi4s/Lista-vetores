#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
    const int TAMANHO = 10;
    std::vector<int> vetor(TAMANHO);
    int numero_busca;
    bool encontrado = false;

    std::cout << "--- Busca por um Elemento Específico ---\n";
    std::cout << "Digite " << TAMANHO << " números inteiros para o vetor:\n";

    
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    std::cout << "\nDigite o número que deseja buscar no vetor: ";
    std::cin >> numero_busca;

    
    for (int i = 0; i < TAMANHO; ++i) {
        if (vetor[i] == numero_busca) {
            encontrado = true;
        }
    }

    std::cout << "\nOs elementos do vetor são: ";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << vetor[i] << (i < TAMANHO - 1 ? ", " : "");
    }
    std::cout << "\n";

    if (encontrado) {
        std::cout << "O número " << numero_busca << " está presente no vetor.\n";
    } else {
        std::cout << "O número " << numero_busca << " NÃO está presente no vetor.\n";
    }

    return 0;
}