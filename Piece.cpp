#include "Piece.h"

Board::Piece() {
    setName("");
    setColor("");
}

Board::Piece(string name, string color) {
    setName(name);
    setColor(color);
    if (color == "white") {
        if (name == "pawn")
            symbol = ♙;
        else if (name == "bishop")
            symbol = ♗;
        else if (name == "knight")
            symbol = ♘;
        else if (name == "rook")
            symbol = ♖;
        else if (name == "queen")
            symbol = ♕;
        else if (name == "king")
            symbol = ♔;
        else
            symbol = ♦;
    }
    else if (color == "black") {
        if (name == "pawn")
            symbol = ♟;
        else if (name == "bishop")
            symbol = ♝;
        else if (name == "knight")
            symbol = ♞;
        else if (name == "rook")
            symbol = ♜;
        else if (name == "queen")
            symbol = ♛;
        else if (name == "king")
            symbol = ♚;
        else
            symbol = ♦;
    }
    else
        cout << "invalid color";

}

void Board::setName(string name) {
    name = name;
}
void Board::setColor(string color) {
    color = color;
}
string Board::getName() {
    return name;
}
string Board::getColor() {
    return color;
}
string Board::getSymbol() {
    return symbol;
}
