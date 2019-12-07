#include "Queen.h"



Queen::Queen(Color c): Piece(c)
{
	this->name = c == White ? "WQ" : "BQ";

}


Queen::~Queen()
{
}

bool Queen::canPerformMove(Move* m)
{
	return abs(m->source_i - m->dest_i) == abs(m->source_i - m->dest_j) ||
		(m->source_i == m->dest_i || m->source_j == m->dest_j);
}
