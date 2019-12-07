#pragma once
#include "Piece.h"

class Knight :
	public Piece
{
public:
	Knight(Color);
	~Knight();
	bool canPerformMove(Move*);
};

