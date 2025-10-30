#include <iostream>
#include <vector>

int main() {
    const int TAMANHO = 5;
    const int TAMANHO_INTERCALADO = TAMANHO * 2;

    std::vector<int> vetor_a(TAMANHO);
    std::vector<int> vetor_b(TAMANHO);
    std::vector<int> vetor_c(TAMANHO_INTERCALADO);

    std::cout << "--- Intercalação de Dois Vetores ---\n";
    
    std::cout << "Digite " << TAMANHO << " números inteiros para o VETOR A:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "A[" << i << "]: ";
        std::cin >> vetor_a[i];
    }

    std::cout << "\nDigite " << TAMANHO << " números inteiros para o VETOR B:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "B[" << i << "]: ";
        std::cin >> vetor_b[i];
    }

    
    int indice_a = 0;
    int indice_b = 0;

    for (int i = 0; i < TAMANHO_INTERCALADO; ++i) {
        if (i % 2 == 0) {
            
            vetor_c[i] = vetor_a[indice_a++];
        } else {
            
            vetor_c[i] = vetor_b[indice_b++];
        }
    }

    std::cout << "\nVetores:\n";
    std::cout << "Vetor A: [";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << vetor_a[i] << (i < TAMANHO - 1 ? ", " : "");
    }
    std::cout << "]\n";

    std::cout << "Vetor B: [";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << vetor_b[i] << (i < TAMANHO - 1 ? ", " : "");
    }
    std::cout << "]\n";

    std::cout << "Vetor Intercalado (C): [";
    for (int i = 0; i < TAMANHO_INTERCALADO; ++i) {
        std::cout << vetor_c[i] << (i < TAMANHO_INTERCALADO - 1 ? ", " : "");
    }
    std::cout << "]\n";

    return 0;
}