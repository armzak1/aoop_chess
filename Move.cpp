#include "Move.h"


Move::Move(Color c, int si, int sj, int di, int dj)
{
	this->color = c;
	this->source_i = si;
	this->source_j = sj;
	this->dest_i = di;
	this->dest_j = dj;
}


Move::~Move()
{
}

bool Move::hasNonZeroDistance()
{
	return source_i != dest_i || source_j != dest_j;
}
