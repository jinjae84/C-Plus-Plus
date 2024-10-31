#pragma once
#include "Zerg.h"
class Zergling : public Zerg
{
public:
	Zergling();

	virtual void Recovery() override;
};

