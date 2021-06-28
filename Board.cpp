#include "Board.h"
#include <iostream>
#include <math.h>
#include <string>
#define WHITE_SQUARE 0xDB
#define BLACK_SQUARE 0xFF

// constructor
Board::Board() {
    setBoard();
    size = 3;
}

// processing given move
void Board::processMove(std::string myMove) {
    if (myMove == "e4") {
        Piece pawn("P", "white");
        board[5][4] = pawn;
    }
    else
        std::cout << "invalid move" << std::endl;
}
// allows for changing size of board
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
    for (int i = numRanks-1; i >= 0 ; i--) {
        invert *= -1;
        for (int k = 0; k < size; k++) {
            if (invert == -1)
                printRank("white", i, k);
            else
                printRank("black",i, k);  
            if (k == ceil(size / 2))
                std::cout << "  " <<  i+1;
            std::cout << std::endl;
        }
    }
  

}

// helper function for printBoard ; prints a rank (row)
void Board::printRank(std::string row, int rank, int squareHeight) {
    int currFile = 0;
    if (row == "white") {
        for (int j = 0; j < numFiles/2; j++) {
            for (int i = 0; i < size*2+1; i++) {
                if (i == ceil(size) && squareHeight == ceil(size / 2) && board[rank][currFile].getName() != "") {
                    std::cout << board[rank][currFile].getName();
                }
                else
                    std::cout << char(WHITE_SQUARE);

            }
            currFile++; // increment currFile after writing one square
            for (int i = 0; i < size*2 + 1; i++) {
                if (i== ceil(size) && squareHeight == ceil(size / 2) && board[rank][currFile].getName() != "") {
                    std::cout << board[rank][currFile].getName();
                }
                else
                    std::cout << char(BLACK_SQUARE);
            }
            currFile++; // increment currFile after writing one square
        }
    }
    else if (row == "black") {
        for (int j = 0; j < numFiles / 2; j++) {
            for (int i = 0; i < size * 2 + 1; i++) {
                if (i== ceil(size) && squareHeight == ceil(size/2) && board[rank][currFile].getName() != "") {
                    std::cout << board[rank][currFile].getName();
                }
                else
                    std::cout << char(BLACK_SQUARE);
            }
            currFile++; // increment currFile after writing one square
            for (int i = 0; i < size * 2 + 1; i++) {
                if (i== ceil(size) && squareHeight == ceil(size / 2) && board[rank][currFile].getName() != "") {
                    std::cout << board[rank][currFile].getName();
                }
                else
                    std::cout << char(WHITE_SQUARE);
            }
            currFile++; // increment currFile after writing one square
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
        Piece blackPawn("P", "black");
        board[6][i] = (blackPawn);
    }
    // initialize black pieces
    for (int i = numFiles-1; i >= 0; i--){
        switch (i) {
        case 0:
        case 7:
        {
            Piece tempRook = Piece("R", "black");
            board[7][i] = tempRook;
        }
            break;
        case 1:
        case 6:
        {
            Piece tempKnight = Piece("N", "black");
            board[7][i] = tempKnight;
        }
            break;
        case 2:
        case 5:
        {
            Piece tempBishop = Piece("B", "black");
            board[7][i] = tempBishop;
        }
            break;
        case 3: 
        {
            Piece tempQueen = Piece("Q", "black");
            board[7][i] = tempQueen;
        }
            break;
        case 4:
        {
            Piece tempKing = Piece("K", "black");
            board[7][i] = tempKing;
        }
            break;
        default:
            std::cout << "Board Initiation Problem." << std::endl;
        }
    }


    // initialize white pawns
    for (int i = 0; i < numFiles; i++) {
        Piece whitePawn = Piece("P", "white");
        board[1][i] = whitePawn;
    }

    // initialize white pieces
    for (int i = numFiles - 1; i >= 0; i--) {
        if (i == 7 || i == 0) {
            Piece tempRook = Piece("R", "white");
            board[0][i] = tempRook;
        }
        else if (i == 6 || i == 1) {
            Piece tempKnight = Piece("N", "white");
            board[0][i] = tempKnight;
        }
        else if (i == 5 || i == 2) {
            Piece tempBishop = Piece("B", "white");
            board[0][i] = tempBishop;
        }
        else if (i == 3) {
            Piece tempQueen = Piece("Q", "white");
            board[0][i] = tempQueen;
        }
        else if (i == 4) {
            Piece tempKing = Piece("K", "white");
            board[0][i] = tempKing;
        }
        else
            std::cout << "Board Initiation Problem." << std::endl;
       
    }
}
