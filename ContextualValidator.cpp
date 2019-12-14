#include "ContextualValidator.h"



ContextualValidator::ContextualValidator(Board* b) : IValidator(b)
{
}


ContextualValidator::~ContextualValidator()
{
}

bool ContextualValidator::_validate(Move* m)
{
	auto piece = board->getCellPiece(m->source_i, m->source_j);
	if (piece == nullptr)
		return false;
	if (!m->hasNonZeroDistance())
		return false;
	if (piece->name[1] == 'N')
		return true;
	int x = m->source_j - m->dest_j;
	int y = m->source_i - m->dest_i;

	int x_dir = x > 0 ? -1 : 1;
	int y_dir = y > 0 ? -1 : 1;


	if (piece->name[1] == 'P')
	{
		return !((x == 0 && !board->isCellEmpty(m->dest_i, m->dest_j)) ||
			(abs(x) > 0 && board->isCellEmpty(m->dest_i, m->dest_j)));

	}
	if (abs(x) > 0 && abs(y) > 0)
	{
		bool res = true;
		for (int i = 1; i < x; i++)
		{
			res &= board->isCellEmpty(m->source_i + y_dir*i, m->source_j + x_dir*i);
		}
		return res;
	}
	else if (abs(x) > 0)
	{
		bool res = true;
		for (int i = 1; i < x; i++)
		{
			res &= board->isCellEmpty(m->source_i, m->source_j + x_dir*i);
		}
		return res;
	}
	else
	{
		bool res = true;
		for (int i = 1; i < y; i++)
		{
			res &= board->isCellEmpty(m->source_i + y_dir*i, m->source_j);
		}
		return res;
	}
}