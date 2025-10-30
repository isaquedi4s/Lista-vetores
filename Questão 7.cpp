#include <iostream>
#include <vector>

int main() {
    const int TAMANHO = 10;
    std::vector<int> vetor_original(TAMANHO);
    std::vector<int> vetor_inverso(TAMANHO);

    std::cout << "--- Inversão de um Vetor ---\n";
    std::cout << "Digite " << TAMANHO << " números:\n";

    
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor_original[i];
    }

    
    for (int i = 0; i < TAMANHO; ++i) {
        
        vetor_inverso[i] = vetor_original[TAMANHO - 1 - i];
    }

    
    std::cout << "\nVetores:\n";
    std::cout << "Vetor Original: [";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << vetor_original[i] << (i < TAMANHO - 1 ? ", " : "");
    }
    std::cout << "]\n";

    std::cout << "Vetor Inverso:  [";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << vetor_inverso[i] << (i < TAMANHO - 1 ? ", " : "");
    }
    std::cout << "]\n";

    return 0;
}