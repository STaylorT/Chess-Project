#ifndef PIECE_H
#define PIECE_H
#include <string>

class Piece {
private:
    std::string name;
    std::string color;
    std::string square;
public:
    Piece();
    Piece(std::string myName, std::string myColor);
    Piece(std::string myName, std::string myColor, std::string mySquare);
    void setColor(std::string myColor);
    void setName(std::string myName);
    void setSquare(std::string mySquare);
    std::string getColor();
    std::string getName();
    std::string getSquare();
};

#endif
