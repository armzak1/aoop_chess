#pragma once
#include "IValidator.h"

class OwnerValidator: 
	public IValidator
{
private:
	bool _validate(Move*);
	std::string invalidMoveMessage = "Please don't touch the opponents figures!";

public:
	OwnerValidator(Board*);
	~OwnerValidator();
	std::string getMessage() { return invalidMoveMessage;  };
};

