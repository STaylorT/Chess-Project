#ifndef GAME_H
#define GAME_H
#include <vector>
#include <string>

class Board;

class Game {
private:
	std::vector<std::string> moves;
	std::string name;
	bool turn;

public:
	Game();
	Game(std::string myName, std::vector<std::string> myMoves);
	void setName(std::string myName);
	std::string getName();
	void pushMove(std::string myMove);
	void playGame(std::vector<std::string> myMoves, Board myBoard);
	void playMove(std::string myMove, Board myBoard);


};




#endif

