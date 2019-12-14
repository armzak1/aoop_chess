#pragma once
#include "IValidator.h"
class MoveBoundValidator :
	public IValidator
{
private:
	bool _validate(Move*);
	std::string invalidMoveMessage = "Cell is out of bounds!";

public:
	MoveBoundValidator(Board*);
	~MoveBoundValidator();
	std::string getMessage() { return invalidMoveMessage; };
};

