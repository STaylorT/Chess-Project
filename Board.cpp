#include "Board.h"
#include <iostream>
#include <math.h>
#include <string>
#define WHITE_SQUARE 0xDB
#define BLACK_SQUARE 0xFF

Board::Board() {
    setBoard();
    size = 3;
}

void Board::setSize(int mySize) {
    size = mySize;
}

// print current board to console
void Board::printBoard() {
std::cout << std::endl;
    char arr[numFiles] = { 'A','B','C','D','E','F','G','H' };
    int filePicker = 0;
    for (int j = 0; j < numFiles; j++) {
        for (int i = 0; i < size * 2 + 1; i++) {
            if (i == ceil(size)) {
                std::cout << arr[filePicker];
                filePicker++;
            }
            else
                std::cout << " ";

        }
    }
    std::cout << std::endl << std::endl;
    int invert = 1;
    for (int i = 0; i < numRanks; i++) {
        invert *= -1;
        for (int k = 0; k < size; k++) {
            if (invert == -1)
                printFile("white", i, k);
            else
                printFile("black",i, k);  
            if (k == ceil(size / 2))
                std::cout << "  " <<  i+1;
            std::cout << std::endl;
        }
    }
  

}
void Board::printFile(std::string row, int rank, int squareHeight) {
    int currFile = 0;
    if (row == "white") {
        for (int j = 0; j < numFiles/2; j++) {
            for (int i = 0; i < size*2+1; i++) {
                if (i == ceil(size) && squareHeight == ceil(size / 2) && board[rank][currFile].getName() != "") {
                    std::cout << board[rank][currFile].getSymbol();
                }
                else
                    std::cout << char(WHITE_SQUARE);

            }
            for (int i = 0; i < size*2 + 1; i++) {
                if (i== ceil(size) && squareHeight == ceil(size / 2) && board[rank][currFile].getName() != "") {
                    std::cout << board[rank][currFile].getSymbol();
                }
                else
                    std::cout << char(BLACK_SQUARE);
            }
        }
    }
    else if (row == "black") {
        for (int j = 0; j < numFiles / 2; j++) {
            for (int i = 0; i < size * 2 + 1; i++) {
                if (i== ceil(size) && squareHeight == ceil(size/2) && board[rank][currFile].getName() != "") {
                    std::cout << board[rank][currFile].getSymbol();
                }
                else
                    std::cout << char(BLACK_SQUARE);

            }
            for (int i = 0; i < size * 2 + 1; i++) {
                if (i== ceil(size) && squareHeight == ceil(size / 2) && board[rank][currFile].getName() != "") {
                    std::cout << board[rank][currFile].getSymbol();
                }
                else
                    std::cout << char(WHITE_SQUARE);
            }
        }
    }

}
// set board to natural position
void Board::setBoard() {
    // initialize middle empty squares
    for (int i = 0; i < numFiles; i++) {
        Piece temp;
        board[2][i] = temp;
        board[3][i] = temp;
        board[4][i] = temp;
        board[5][i] = temp;
    }
    // initialize black pawns
    for (int i = 0; i < numFiles; i++) {
        Piece blackPawn("pawn", "black");
        board[6][i] = (blackPawn);
    }
    // initialize black pieces
    for (int i = numFiles-1; i >= 0; i--){
        Piece tempRook = Piece("rook", "black");
        board[7][i] = tempRook;
        Piece tempKnight = Piece("knight", "black");
        board[7][i] = tempKnight;
        Piece tempBishop = Piece("bishop", "black");
        board[7][i] = tempBishop;
        Piece tempQueen = Piece("queen", "black");
        board[7][i] = tempQueen;
        Piece tempKing = Piece("king", "black");
        board[7][i] = tempKing;
        Piece tempBishop2 = Piece("bishop", "black");
        board[7][i] = tempBishop2;
        Piece tempKnight2 = Piece("knight", "black");
        board[7][i] = tempKnight2;
        Piece tempRook2 = Piece("rook", "black");
        board[7][i] = tempRook2;
    }


    // initialize white pawns
    for (int i = 0; i < numFiles; i++) {
        Piece whitePawn = Piece("pawn", "white");
        board[1][i] = whitePawn;
    }

    // initialize white pieces
    for (int i = numFiles - 1; i >= 0; i--) {
        Piece whiteRook = Piece("rook", "white");
        board[0][i] = whiteRook;
        Piece whiteKnight = Piece("knight", "white");
        board[0][i] = whiteKnight;
        Piece whiteBishop = Piece("bishop", "white");
        board[0][i] = whiteBishop;
        Piece whiteKing = Piece("king", "white");
        board[0][i] = whiteKing;
        Piece whiteQueen = Piece("queen", "white");
        board[0][i] = whiteQueen;
        Piece whiteBishop2 = Piece("bishop", "white");
        board[0][i] = whiteBishop2;
        Piece whiteKnight2 = Piece("knight", "white");
        board[0][i] = whiteKnight2;
        Piece whiteRook2 = Piece("rook", "white");
        board[0][i] = whiteRook2;
    }
}




