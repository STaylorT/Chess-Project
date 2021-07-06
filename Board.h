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
    std::string name;
    std::vector<std::string> moves;
    int size;
public:
    Piece board[numRanks][numFiles];
    Board();
    void printBoard();
    void setBoard();
    void printRank(std::string row, int currRank, int squareHeight);
    void setSize(int mySize);
    int parseMove(Board &myBoard, std::string myMove);
    void processMove(Board &myBoard, std::vector<char> myVec, std::string myMove);
    void updateBoard(Board &myBoard,int prevFile, int prevRank, int curFile, int curRank);

};

#endif
