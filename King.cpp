#include "King.h"



King::King(Color c) : Piece(c)
{
	this->name = c == White ? "WK" : "BK";

}


King::~King()
{
}

bool King::canPerformMove(Move* m)
{
	return abs(m->source_i - m->dest_i) < 2 && abs(m->source_j - m->dest_j) < 2;
}
