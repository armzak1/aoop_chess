#pragma once
#include "Piece.h"

class Cell
{
private:
	bool is_empty=true;
	Piece* piece = nullptr;
public:
	Cell();
	~Cell();
	bool isEmpty();
	Piece* getPiece();
	void addPiece(Piece*);
	void removePiece();
	std::string getLabel();
};

