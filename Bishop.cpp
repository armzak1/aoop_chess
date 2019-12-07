#include "Bishop.h"


Bishop::Bishop(Color c) : Piece(c)
{
	this->name = c == White ? "WB" : "BB";

}


Bishop::~Bishop()
{
}

bool Bishop::canPerformMove(Move* m)
{
	return abs(m->source_i - m->dest_i) == abs(m->source_i - m->dest_j);
}

