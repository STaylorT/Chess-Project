#include "Piece.h"

Piece::Piece() {
    name = "";
    color = "";
}

Piece::Piece(std::string myName, std::string myColor) {
    name = myName;
    color = myColor;
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
