// Author: Taylor Thomas  |  6/2/2021
// This program simulates common chess openings.
#include "Board.h"
#include "Piece.h"
#include "Game.h"
#include <iostream>
#include <iomanip>
#include <fcntl.h>
#include <fstream>
#include <io.h>
#include <stdio.h>
using namespace std;

int main(){
	Board board1 = Board();
	int size = 0;
	cout << "Enter size of board: ";
	cin >> size;
	board1.setSize(size);
	board1.printBoard();
	string move;
	cout << "Enter a move: (E4 Only):: ";
	cin >> move;
	board1.processMove(move);
	board1.printBoard();

	return 0;
}
