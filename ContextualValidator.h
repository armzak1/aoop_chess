#pragma once
#include "IValidator.h"
class ContextualValidator :
	public IValidator
{
public:
	ContextualValidator(Board* b);
	~ContextualValidator();
	bool validate(Move*);
};

