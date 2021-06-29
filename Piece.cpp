#include "Piece.h"

Piece::Piece() {
    name = "";
    color = "";
}

Piece::Piece(std::string myName, std::string myColor) {
    name = myName;
    color = myColor;
}

Piece::Piece(std::string myName, std::string myColor, std::string mySquare) {
    name = myName;
    color = myColor;
    square = mySquare;
}

void Piece::setName(std::string myName) {
    name = myName;
}
void Piece::setColor(std::string myColor) {
    color = myColor;
}
void Piece::setSquare(std::string mySquare) {
    square = mySquare;
}
std::string Piece::getName() {
    return name;
}
std::string Piece::getColor() {
    return color;
}
std::string Piece::getSquare() {
    return square;
}
