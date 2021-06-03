#pragma once
#ifndef PIECE_H
#define PIECE_H
#include <string>

class Piece {
private:
    string name;
    string color;
    string symbol;
    int value;
public:
    Piece();
    void setColor(string name);
    void setName(string name);
    string getColor() :
        string getName();
    string getSymbol();

};

#endif
