#include "IValidator.h"


IValidator::IValidator(Board* b)
{
	this->board = b;
}


IValidator::~IValidator()
{
}

void IValidator::setNext(IValidator* v)
{
	this->next = v;
}

bool IValidator::validate(Move* m)
{
	bool isValid = _validate(m);
	if (!isValid)
	{
		std::cout << getMessage() << "\n";
		return false;
	}
	else if (next == nullptr)
		return true;
	else
		return next->validate(m);
	
}
