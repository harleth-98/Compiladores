#include "scanner.h"
#include <cctype>

std::vector<Token> analizar(const std::string &entrada) {
    std::vector<Token> tokens;
    std::string buffer;

    for (size_t i = 0; i < entrada.size(); i++) {
        char c = entrada[i];

        if (isalpha(c)) {  // Identificadores
            buffer = c;
            while (i + 1 < entrada.size() && isalnum(entrada[i + 1])) {
                buffer += entrada[++i];
            }
            tokens.push_back({"Identificador", buffer});
        } 
        else if (isdigit(c)) {  // Números
            buffer = c;
            while (i + 1 < entrada.size() && isdigit(entrada[i + 1])) {
                buffer += entrada[++i];
            }
            tokens.push_back({"Numero", buffer});
        } 
        else if (c == '+' || c == '-' || c == '*' || c == '/') { // Operador
            tokens.push_back({"Operador", std::string(1, c)});
        } 
        else if (c == '=') { // Asignación
            tokens.push_back({"Asignacion", "="});
        } 
        else if (c == ';') { // Fin de instrucción
            tokens.push_back({"Fin de instruccion", ";"});
        }
    }
    return tokens;
}