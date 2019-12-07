#pragma once
#include "Board.h"
#include "Move.h"
class ChessController
{
private: 
	Board* board;
public:
	ChessController(Board*);
	~ChessController();
	void startGame();
	void makeMove(Move*);
};

