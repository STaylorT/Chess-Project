#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include <string>
const int numFiles = 8;
const int numRanks = 8;

#include "Piece.h"

class Board {
private:
    Piece board[numFiles][numRanks];
    std::string name;
    std::vector<std::string> moves;
public:
    Board();
    void printBoard();
    void pushMove(std::string);
    void setBoard();
    void printFile(std::string row, int i);

};

#endif
