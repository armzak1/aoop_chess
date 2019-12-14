#pragma once
#include "IValidator.h"
#include "CaptureNotifier.h"
class NotifierAdapter :
	public IValidator
{
private:
	bool _validate(Move* m);
	CaptureNotifier* captureNotifier;

public:
	NotifierAdapter(Board*);
	~NotifierAdapter();
	std::string getMessage() { return invalidMoveMessage; };
};

