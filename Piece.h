#ifndef PIECE_H
#define PIECE_H
#include <string>

class Piece {
private:
    std::string name;
    std::string color;
    std::string symbol;
public:
    Piece();
    Piece(std::string myName, std::string myColor, std::string mySymbol);
    void setColor(std::string name);
    void setName(std::string name);
    std::string getColor();
    std::string getName();
    std::string getSymbol();

};

#endif
