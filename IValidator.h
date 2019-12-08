#pragma once
#include "Board.h"
#include "Move.h"

class IValidator
{
protected:
	Board* board;
public:
	IValidator(Board* b);
	~IValidator();
	virtual bool validate(Move*) = 0;
};

