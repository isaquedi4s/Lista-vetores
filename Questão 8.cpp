#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "--- Sequência de Fibonacci ---\n";
    std::cout << "Quantos elementos da sequência de Fibonacci você deseja (N >= 1)? ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "O número de elementos deve ser pelo menos 1.\n";
        return 1;
    }

    std::vector<long long> fibonacci;

    if (n >= 1) {
        fibonacci.push_back(0); 
    }
    if (n >= 2) {
        fibonacci.push_back(1); 
    }

    
    for (int i = 2; i < n; ++i) {
        long long proximo_elemento = fibonacci[i - 1] + fibonacci[i - 2];
        fibonacci.push_back(proximo_elemento);
    }

    std::cout << "\nA sequência de Fibonacci com " << n << " elementos é:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci[i] << (i < n - 1 ? ", " : "");
    }
    std::cout << "\n";

    return 0;
}