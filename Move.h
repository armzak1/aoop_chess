#pragma once

enum Color;
class Move
{
	public:
	int source_i, source_j, dest_i, dest_j;
	Color color;
	Move(Color, int, int, int, int);
	~Move();
	bool hasNonZeroDistance();
};
