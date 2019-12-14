#pragma once
#include "IValidator.h"
class ColorValidator :
	public IValidator
{
private: 
	bool _validate(Move*);
	std::string invalidMoveMessage = "You can't attack your own pieces!";

public:
	ColorValidator(Board* b);
	~ColorValidator();
	std::string getMessage() { return invalidMoveMessage; };
};

