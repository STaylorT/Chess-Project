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
	// initializing main board
	Board board1 = Board();
	// determine size of board (user input)
	int size = 0;
	cout << "Enter size(1-6) of board [default: 3]: ";
	cin >> size;
	board1.setSize(size);
	board1.printBoard();




	string move;
	cout << "Enter a move: (E4 Only):: ";
	cin >> move;
	int parseCheck = board1.parseMove(board1,move);
	if (parseCheck < 0)
		std::cout << "Invalid move syntax." << std::endl;
	board1.printBoard();

	return 0;
}
