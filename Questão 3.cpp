#include <iostream>
#include <vector>
#include <iomanip> 

int main() {
    const int TAMANHO = 8;
    std::vector<double> vetor(TAMANHO); 
    double soma = 0.0;

    std::cout << "--- Média dos Elementos de um Vetor ---\n";
    std::cout << "Digite " << TAMANHO << " números reais:\n";

    
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
        soma += vetor[i]; 
    }

    double media = soma / TAMANHO;

    
    std::cout << "\nOs elementos do vetor são: ";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << std::fixed << std::setprecision(2) << vetor[i] << (i < TAMANHO - 1 ? ", " : "");
    }
    std::cout << "\n";

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "A soma dos elementos é: " << soma << "\n";
    std::cout << "A média aritmética dos valores é: " << media << "\n";

    return 0;
}