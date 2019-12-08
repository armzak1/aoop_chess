#include "OwnerValidator.h"



OwnerValidator::OwnerValidator(Board* b) : IValidator(b)
{
}


OwnerValidator::~OwnerValidator()
{
}

bool OwnerValidator::validate(Move* m)
{
	auto piece = board->getCellPiece(m->source_i, m->source_j);
	return (piece != nullptr && m->color == piece->color);
}
