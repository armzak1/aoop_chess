#pragma once
#include "Piece.h"
class King :
	public Piece
{
public:
	King(Color);
	~King();
	bool canPerformMove(Move*);
};

