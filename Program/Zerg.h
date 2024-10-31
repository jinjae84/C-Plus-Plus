#pragma once
#include <iostream>

using namespace std;

class Zerg
{
protected:
	int initializeHealth;
	int health;
public:
	virtual void Recovery();
};

