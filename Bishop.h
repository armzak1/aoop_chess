#pragma once
#include "Piece.h"
class Bishop :
	public Piece
{
public:
	Bishop(Color);
	~Bishop();
	bool canPerformMove(Move*);
};

