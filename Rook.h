#pragma once
#include "Piece.h"
class Rook :
	public Piece
{
public:
	Rook(Color);
	~Rook();
	bool canPerformMove(Move*);
};

