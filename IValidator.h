#pragma once
#include "Board.h"
#include "Move.h"
#include <iostream>
#include <string>

class IValidator
{
protected:
	Board* board;
	IValidator* next;
	virtual bool _validate(Move*) = 0;
	std::string invalidMoveMessage = "Default error message";
public:
	IValidator(Board* b);
	~IValidator();
	bool validate(Move*);
	virtual void setNext(IValidator*);
	virtual std::string getMessage() = 0;
};

