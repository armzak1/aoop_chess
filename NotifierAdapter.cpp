#include "NotifierAdapter.h"



NotifierAdapter::NotifierAdapter(Board* b): IValidator(b)
{
	captureNotifier = new CaptureNotifier(b);
}


NotifierAdapter::~NotifierAdapter()
{
}

bool NotifierAdapter::_validate(Move* m)
{
	auto endPiece = board->getCellPiece(m->dest_i, m->dest_j);
	if (m->hasNonZeroDistance() && endPiece != nullptr && m->color != endPiece->color)
		captureNotifier->notifyCapture();
	return true;
}
