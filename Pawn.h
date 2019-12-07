#pragma once
#include "Piece.h"
class Pawn :
	public Piece
{
public:
	Pawn(Color);
	~Pawn();
	bool canPerformMove(Move*);
};

