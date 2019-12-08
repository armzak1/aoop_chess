#pragma once
#include "IValidator.h"
class ColorValidator :
	public IValidator
{
public:
	ColorValidator(Board* b);
	~ColorValidator();
	bool validate(Move*);
};

