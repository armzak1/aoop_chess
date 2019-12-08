#pragma once
#include "Piece.h"
#include "Cell.h"
#include "Pawn.h"
#include "King.h"
#include "Queen.h"
#include "Knight.h"
#include "Bishop.h"
#include "Rook.h"
#include <vector>
class IValidator;


class Board
{
private:
	Cell cells[8][8]; //??
	Board();
	~Board();
	static Board* instance;
	std::vector<IValidator*> validators;

public:
	static Board* getInstance();
	bool isCellEmpty(int, int);
	void initialSetup();
	void printState();
	Piece* getCellPiece(int, int);
	void movePiece(Move*);
};

