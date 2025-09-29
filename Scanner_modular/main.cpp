#include <iostream>
#include "scanner.h"

int main() {
    std::string entrada;
    std::cout << "Ingrese una expresion (ejemplo: x = 10 + 20;): ";
    std::getline(std::cin, entrada);

    std::vector<Token> tokens = analizar(entrada);
    std::cout << "\nTokens generados:\n";
    for (auto &t : tokens) {
        std::cout << t.tipo << " -> " << t.valor << std::endl;
    }
    return 0;
}