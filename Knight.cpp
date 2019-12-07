#include "Knight.h"


Knight::Knight(Color c) : Piece(c)
{
	this->name = c == White ? "WN" : "BN";
}


Knight::~Knight()
{
}

bool Knight::canPerformMove(Move* m)
{
	return (abs(m->source_i - m->dest_i) == 1 && abs(m->source_j - m->dest_j) == 2) ||
		(abs(m->source_i - m->dest_i) == 2 && abs(m->source_j - m->dest_j) == 1);
}
