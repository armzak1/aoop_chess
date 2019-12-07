#pragma once

class Move
{
	public:
	int source_i, source_j, dest_i, dest_j;
	Move(int, int, int, int);
	~Move();
	bool hasNonZeroDistance();
};
