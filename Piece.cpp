#include "Piece.h"

Piece::Piece() {
    name = "";
    color = "";
    symbol = "";
}

Piece::Piece(std::string myName, std::string myColor, std::string mySymbol) {
    name = myName;
    color = myColor;
    symbol = mySymbol;
}

void Piece::setName(std::string myName) {
    name = myName;
}
void Piece::setColor(std::string myColor) {
    color = myColor;
}
std::string Piece::getName() {
    return name;
}
std::string Piece::getColor() {
    return color;
}
std::string Piece::getSymbol() {
    return symbol;
}
