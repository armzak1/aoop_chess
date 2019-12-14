#pragma once
#include "Board.h"
class CaptureNotifier
{
private:
	Board* board;
public:
	CaptureNotifier(Board*);
	~CaptureNotifier();
	void notifyCapture();
};

