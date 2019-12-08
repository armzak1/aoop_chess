#pragma once
#include "Move.h"
#include <cmath>
#include <string>

enum Color { White = -1, Black = 1 };

class Piece
{
public:
	Color color;
	std::string name;
	Piece(Color);
	~Piece();
	virtual bool canPerformMove(Move*) = 0;
};

