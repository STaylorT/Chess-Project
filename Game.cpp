#include "Game.h"
#include <ctype.h>

Game::Game() {
	name = "";
	moves = { "" };
	turn = 0;

}
Game::Game(std::string myName, std::vector<std::string> myMoves) {
	for (int i = 0; i < myMoves.size(); i++) {
		moves[i] = myMoves[i];
	}
	name = myName;
	turn = 0;
}

void Game::setName(std::string myName) {
	name = myName;
}

std::string Game::getName() {
	return name;
}

void Game::pushMove(std::string myMove) {
	moves.push_back(myMove);
}

void Game::playGame(std::vector<std::string> myMoves, Board myBoard) {
	for (int i = 0; i < myMoves.size(); i++) {
		playMove(myMoves[i], &myBoard);
	}
}

void Game::playMove(std::string myMove, Board myBoard) {
	// convert to lowercase
	for (int i = 0; myMove[i]; i++) {
		myMove[i] = myMove(str[i]);
	}
	myBoard.processMove(myMove, turn);

}
