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
	return (abs(m->source_i - m->dest_i) == 1) && (abs(m->source_j - m->dest_j) < 2);
}
