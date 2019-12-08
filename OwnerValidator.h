#pragma once
#include "IValidator.h"

class OwnerValidator: 
	public IValidator
{
public:
	OwnerValidator(Board*);
	~OwnerValidator();
	bool validate(Move*);
};

