#include <iostream>
#include <vector>

int main() {
    const int TAMANHO = 5;
    std::vector<double> vetor_a(TAMANHO);
    std::vector<double> vetor_b(TAMANHO);
    double produto_escalar = 0.0;

    std::cout << "--- Cálculo de Produto Escalar ---\n";
    
    std::cout << "Digite " << TAMANHO << " números reais para o VETOR A:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "A[" << i << "]: ";
        std::cin >> vetor_a[i];
    }

    std::cout << "\nDigite " << TAMANHO << " números reais para o VETOR B:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "B[" << i << "]: ";
        std::cin >> vetor_b[i];
    }

    for (int i = 0; i < TAMANHO; ++i) {
        produto_escalar += vetor_a[i] * vetor_b[i];
    }

    std::cout << "\nO Produto Escalar (A . B) é: " << produto_escalar << "\n";

    return 0;
}