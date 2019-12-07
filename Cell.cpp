#include "Cell.h"

Cell::Cell()
{
}


Cell::~Cell()
{
	delete this->piece;
}

void Cell::addPiece(Piece* p)
{
	this->piece = p;
	is_empty = false;
}

void Cell::removePiece()
{
	this->piece = nullptr;
	is_empty = true;
}

bool Cell::isEmpty()
{
	return is_empty;
}

Piece* Cell::getPiece()
{
	return this->piece;
}

std::string Cell::getLabel()
{
	return piece == nullptr ? "__" : piece->name;
}
