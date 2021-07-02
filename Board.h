#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include <map>
#include <string>

const int numFiles = 8;
const int numRanks = 8;

enum file {a, b, c, d, e, f, g, h};


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
    void printRank(std::string row, int currRank, int squareHeight);
    void setSize(int mySize);
    int parseMove(std::string myMove);
    void processMove(std::vector<char> myVec, std::string myMove);

};

#endif
