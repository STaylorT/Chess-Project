#pragma once
#ifndef BOARD_H
#define BOARD_H
#include <vector>
class Piece;
#define FILES 8
#define RANKS 8

class Board {
private:
    vector<vector<Piece>> board;
    string name;
    vector<string> moves;
public:
    Board();
    void printBoard();
    void pushMove(string);


};

#endif
