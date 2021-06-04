#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include <string>
const int numFiles = 8;
const int numRanks = 8;

#include "Piece.h"

class Board {
private:
    Piece board[numRanks][numFiles];
    std::string name;
    std::vector<std::string> moves;
    int size;
public:
    Board();
    void printBoard();
    void setBoard();
    void printFile(std::string row, int currRank, int squareHeight);
    void setSize(int mySize);

};

#endif
