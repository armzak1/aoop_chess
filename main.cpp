#include <iostream>
#include <vector>
#include "Board.h"
#include "ChessController.h"
#include "Move.h"

int main()
{
	Board* b = Board::getInstance();
	auto controller = new ChessController(b);
	controller->startGame();
	b->printState();

	std::cout << "Input the moves as Color(1 for black and -1 for white), start_i, start_j, dest_i, dest_j \n";
	int c, i, j, k, l;

	while(std::cin >> c >> i >> j >> k >> l)
	{
		auto m = new Move((Color)c, i, j, k, l);
		controller->makeMove(m);
		b->printState();
	}
	
	system("pause");
}