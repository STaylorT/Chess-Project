#include "Board.h"

Board::Board() {
    setBoard();
}

// print current board to console
void Board::printBoard() {

}

// set board to natural position
void Board::setBoard() {
    // initialize middle empty squares
    for (int i = 0; i < FILES * RANKS / 2; i++) {
        board.push_back(Piece());
    }
    // initialize black pawns
    for (int i = 0; i < FILES; i++) {
        board.push_back(Piece("pawn", "black"));
    }
    // initialize black pieces
    board.push_back(Piece("rook", "black"));
    board.push_back(Piece("knight", "black"));
    board.push_back(Piece("bishop", "black"));
    board.push_back(Piece("king", "black"));
    board.push_back(Piece("queen", "black"));
    board.push_back(Piece("bishop", "black"));
    board.push_back(Piece("horse", "black"));
    board.push_back(Piece("rook", "black"));

    // initialize white pawns
    for (int i = 0; i < FILES; i++) {
        board.insert(0, Piece("pawn", "white"));
    }

    // initialize white pieces
    board.push_back(Piece("rook", "white"));
    board.push_back(Piece("knight", "white"));
    board.push_back(Piece("bishop", "white"));
    board.push_back(Piece("king", "white"));
    board.push_back(Piece("queen", "white"));
    board.push_back(Piece("bishop", "white"));
    board.push_back(Piece("knight", "white"));
    board.push_back(Piece("rook", "white"));
}




