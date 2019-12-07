#include "Pawn.h"
#include "Board.h"

Pawn::Pawn(Color c): Piece(c)
{
	this->name = c == White ? "WP" : "BP";

}


Pawn::~Pawn()
{
}

bool Pawn::canPerformMove(Move* m)
{
	int dir = 1;
	//int dir = m->piece->color == White ? -1 : 1;
	return ((m->source_i + dir == m->dest_i) &&
		abs(m->source_j - m->dest_j) < 2);
}
