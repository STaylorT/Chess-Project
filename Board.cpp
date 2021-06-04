#include "Board.h"
#include <iostream>
#include <math.h>
#define WHITE_SQUARE 0xDB
#define BLACK_SQUARE 0xFF
#define SIZE_SQUARE 3

Board::Board() {
    setBoard();
}

// print current board to console
void Board::printBoard() {
    char arr[numFiles] = { 'A','B','C','D','E','F','G','H' };
    std::cout << "   ";
    for (int i = 0; i < numFiles; i++) {
        std::cout << arr[i] << "     ";
    }
    std::cout << std::endl << std::endl;
    int invert = 1;
    for (int i = 0; i < numRanks; i++) {
        invert *= -1;
        for (int k = 0; k < SIZE_SQUARE; k++) {
            if (invert == -1)
                printFile("white", i);
            else
                printFile("black",i);  
            if (k == ceil(SIZE_SQUARE / 2))
                std::cout << "  " <<  i+1;
            std::cout << std::endl;
        }
    }
  

}
void Board::printFile(std::string row, int fileLetter) {
    if (row == "white") {
        for (int j = 0; j < numFiles/2; j++) {
            for (int i = 0; i < SIZE_SQUARE*2; i++) {
                std::cout << char(WHITE_SQUARE);
            }
            for (int i = 0; i < SIZE_SQUARE*2; i++) {
                std::cout << char(BLACK_SQUARE);
            }
        }
    }
    else if (row == "black") {
        for (int j = 0; j < numFiles / 2; j++) {
            for (int i = 0; i < SIZE_SQUARE*2; i++) {
                std::cout << char(BLACK_SQUARE);
            }
            for (int i = 0; i < SIZE_SQUARE*2; i++) {
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




