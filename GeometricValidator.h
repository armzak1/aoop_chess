#pragma once
#include "IValidator.h"
class GeometricValidator :
	public IValidator
{
public:
	GeometricValidator(Board* b);
	~GeometricValidator();
	bool validate(Move*);
};

