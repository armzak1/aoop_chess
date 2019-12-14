#pragma once
#include "IValidator.h"
class ContextualValidator :
	public IValidator
{
private:
	bool _validate(Move*);
	std::string invalidMoveMessage = "This move is blocked by other pieces!";

public:
	ContextualValidator(Board* b);
	~ContextualValidator();
	std::string getMessage() { return invalidMoveMessage; };
};

