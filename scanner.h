#ifndef SCANNER_H
#define SCANNER_H

#include <string>
#include <vector>

struct Token {
    std::string tipo;
    std::string valor;
};

std::vector<Token> analizar(const std::string &entrada);

#endif