#pragma once
#include "Piece.h"
class Queen :
	public Piece
{
public:
	Queen(Color);
	~Queen();
	bool canPerformMove(Move*);

};

