#include "ColorValidator.h"



ColorValidator::ColorValidator(Board* b) : IValidator(b)
{
}


ColorValidator::~ColorValidator()
{
}

bool ColorValidator::validate(Move* m)
{
	auto startPiece = this->board->getCellPiece(m->source_i, m->source_j);
	auto endPiece = this->board->getCellPiece(m->dest_i, m->dest_j);
	if (startPiece == nullptr) 
		return false;
	if (endPiece != nullptr && m->hasNonZeroDistance() && startPiece->color == endPiece->color)
		return false;
	if (startPiece->name[1] != 'P')
		return true;
	return (startPiece->color == m->dest_i - m->source_i);

}