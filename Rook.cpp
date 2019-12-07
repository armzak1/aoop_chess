#include "Rook.h"

Rook::Rook(Color c) : Piece(c)
{
	this->name = c == White ? "WR" : "BR";
}


Rook::~Rook()
{
}

bool Rook::canPerformMove(Move* m)
{
	return (m->source_i == m->dest_i || m->source_j == m->dest_j);
}