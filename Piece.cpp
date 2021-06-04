#include "Piece.h"


Piece::Piece() {
    name = "";
    color = "";
    symbol = "";
}

Piece::Piece(std::string myName, std::string myColor) {
    name = myName;
    color = myColor;
    if (color == "white") {
        if (name == "pawn")
            symbol = "P";
        else if (name == "bishop")
            symbol = "B";
        else if (name == "knight")
            symbol = "N";
        else if (name == "rook")
            symbol = "R";
        else if (name == "queen")
            symbol = "Q";
        else if (name == "king")
            symbol = "K";
        else
            symbol = " ";
    }
    else if (color == "black") {
        if (name == "pawn")
            symbol = "P";
        else if (name == "bishop")
            symbol = "B";
        else if (name == "knight")
            symbol = "N";
        else if (name == "rook")
            symbol = "R";
        else if (name == "queen")
            symbol = "Q";
        else if (name == "king")
            symbol = "K";
        else
            symbol = " ";
    }
    else
        symbol = "no color";
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
