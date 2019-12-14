#include "OrderValidator.h"



OrderValidator::OrderValidator(Board* b): IValidator(b)
{
}


OrderValidator::~OrderValidator()
{
}

bool OrderValidator::_validate(Move* m)
{
	return m->color != board->getlastMoveColor();
}


