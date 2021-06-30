#ifndef PIECE_H
#define PIECE_H
#include <string>

class Piece {
private:
    std::string name;
    std::string color;
    std::string square;
    int file;
    int rank;
public:
    Piece();
    Piece(std::string myName, std::string myColor);
    Piece(std::string myName, std::string myColor, std::string mySquare);
    Piece(std::string myName, std::string myColor, int myFile, int myRank);
    void setColor(std::string myColor);
    void setName(std::string myName);
    void setSquare(std::string mySquare);
    std::string getColor();
    std::string getName();
    std::string getSquare();
    int getRank();
    int getFile();
};

#endif
