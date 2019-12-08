#include <iostream>
#include "Board.h"
#include "ChessController.h"
#include "Move.h"

int main()
{
	Board* b = Board::getInstance();
	auto controller = new ChessController(b);
	controller->startGame();
	b->printState();
	auto m = new Move(Black, 6, 4, 5, 4);
	controller->makeMove(m);
	b->printState();
	system("pause");
}