#pragma once
#include "IValidator.h"
class GeometricValidator :
	public IValidator
{
private:
	bool _validate(Move*);
	std::string invalidMoveMessage = "Selected piece cannot move like this!";

public:
	GeometricValidator(Board* b);
	~GeometricValidator();
	std::string getMessage() { return invalidMoveMessage; };
};

