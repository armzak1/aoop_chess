#include "Board.h"
#include "OwnerValidator.h"
#include "GeometricValidator.h"
#include "ColorValidator.h"
#include "ContextualValidator.h"
#include "OrderValidator.h"
#include "NotifierAdapter.h"
#include "MoveBoundValidator.h"
#include <iostream>

Board* Board::instance = 0;

Board::Board()
{
	afterFirstCapture = false;
	auto mbv = new MoveBoundValidator(this);
	auto ov = new OwnerValidator(this);
	auto gv = new GeometricValidator(this);
	auto cv = new ColorValidator(this);
	auto ctxv = new ContextualValidator(this);
	auto nv = new NotifierAdapter(this);
	ctxv->setNext(nv);
	cv->setNext(ctxv);
	gv->setNext(cv);
	ov->setNext(gv);
	mbv->setNext(ov);
	chain = mbv;
}


Board::~Board()
{
}

Board* Board::getInstance()
{
	if (instance == 0) 
	{
		instance = new Board();
	}
	return instance;
}

bool Board::isCellEmpty(int i, int j)
{
	return cells[i][j].isEmpty();
}

void Board::initialSetup()
{
	//setup pawns
	for (int i = 0; i < 8; i++)
	{
		cells[1][i].addPiece(new Pawn(Black));
		cells[6][i].addPiece(new Pawn(White));
	}
	//setup rooks
	cells[7][0].addPiece(new Rook(White)); cells[7][7].addPiece(new Rook(White));
	cells[0][0].addPiece(new Rook(Black)); cells[0][7].addPiece(new Rook(Black));

	//setup knights
	cells[7][1].addPiece(new Knight(White)); cells[7][6].addPiece(new Knight(White));
	cells[0][1].addPiece(new Knight(Black)); cells[0][6].addPiece(new Knight(Black));

	//setup bishops
	cells[7][2].addPiece(new Bishop(White)); cells[7][5].addPiece(new Bishop(White));
	cells[0][2].addPiece(new Bishop(Black)); cells[0][5].addPiece(new Bishop(Black));

	//setup queens
	cells[0][3].addPiece(new Queen(Black)); cells[7][3].addPiece(new Queen(White));

	//setup kings
	cells[0][4].addPiece(new King(Black)); cells[7][4].addPiece(new King(White));

	return;
}

void Board::printState()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			std::cout << cells[i][j].getLabel() << " ";
		std::cout << "\n";
	}
	std::cout << "\n";
	return;
}

Piece* Board::getCellPiece(int i, int j)
{
	return cells[i][j].getPiece();
}

Color Board::getlastMoveColor()
{
	return instance->lastMoveColor;
}

void Board::notifyFirstCapture()
{
	if (instance->afterFirstCapture) 
		return;
	auto ov = new OrderValidator(this);
	ov->setNext(instance->chain);
	instance->chain = ov;
	instance->afterFirstCapture = true;
	std::cout << "First capture has been made. Please follow the order from this point on!";
}

void Board::movePiece(Move* m)
{
	if (!chain->validate(m))
	{
		std::cout << "Move canceled.\n";
		return;
	}
	lastMoveColor = m->color;
	auto p = cells[m->source_i][m->source_j].getPiece();
	cells[m->source_i][m->source_j].removePiece();
	cells[m->dest_i][m->dest_j].addPiece(p);
}


