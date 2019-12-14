#include "OwnerValidator.h"



OwnerValidator::OwnerValidator(Board* b) : IValidator(b)
{
}


OwnerValidator::~OwnerValidator()
{
}

bool OwnerValidator::_validate(Move* m)
{
	auto piece = board->getCellPiece(m->source_i, m->source_j);
	if (piece == nullptr)
		invalidMoveMessage = "There's no figure to move!";
	return (piece != nullptr && m->color == piece->color);
}



