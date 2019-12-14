#include "GeometricValidator.h"



GeometricValidator::GeometricValidator(Board* b) : IValidator(b)
{
}


GeometricValidator::~GeometricValidator()
{
}

bool GeometricValidator::_validate(Move* m)
{
	auto p = this->board->getCellPiece(m->source_i, m->source_j);
	return p == nullptr ? false : p->canPerformMove(m);
}