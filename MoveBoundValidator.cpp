#include "MoveBoundValidator.h"



MoveBoundValidator::MoveBoundValidator(Board* b) : IValidator(b)
{
}


MoveBoundValidator::~MoveBoundValidator()
{
}

bool MoveBoundValidator::_validate(Move* m)
{
	return !(m->source_i > 7 || m->source_i < 0 || m->source_j > 7 || m->source_j < 0 ||
		m->dest_i > 7 || m->dest_i < 0 || m->dest_j > 7 || m->dest_j < 0);
}
