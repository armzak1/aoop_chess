#pragma once
#include "IValidator.h"
class OrderValidator :
	public IValidator
{
private:
	bool _validate(Move*);
	std::string invalidMoveMessage = "Please wait for your turn!";

public:
	OrderValidator(Board* b);
	~OrderValidator();
	std::string getMessage() { return invalidMoveMessage;  };
};

