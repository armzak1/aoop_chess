#include "ChessController.h"
#include "Move.h"

ChessController::ChessController(Board* b)
{
	this->board = b;
}


ChessController::~ChessController()
{
}

void ChessController::startGame()
{
	board->initialSetup();
}

void ChessController::makeMove(Move* m)
{
	board->movePiece(m);
}
