#pragma once
#include "Move.h"
#include <cmath>
#include <string>

enum Color { White, Black };

class Piece
{
public:
	Color color;
	std::string name;
	Piece(Color);
	~Piece();
	virtual bool canPerformMove(Move*) = 0;
};

