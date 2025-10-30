#include <iostream>

int main() {
    int n;
    long long fatorial = 1; 

    std::cout << "--- Cálculo do Fatorial ---\n";
    std::cout << "Digite um número inteiro não negativo: ";
    std::cin >> n;

    
    if (n < 0) {
        std::cout << "Fatorial não é definido para números negativos.\n";
    } else {
        
        for (int i = 1; i <= n; ++i) {
            fatorial *= i;
        }

        
        std::cout << "\nO fatorial de " << n << " (" << n << "!) é: " << fatorial << "\n";
    }

    return 0;
}