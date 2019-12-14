#include "CaptureNotifier.h"



CaptureNotifier::CaptureNotifier(Board* b)
{
	
}


CaptureNotifier::~CaptureNotifier()
{
}

void CaptureNotifier::notifyCapture()
{
	board->notifyFirstCapture();
}