#pragma once
#include <iostream>

using namespace std;

class Zerg
{
protected:
	int initializeHealth;
	int health;
	
public:
	Zerg();
	
	virtual void Recovery();
	
	void OnDamage(int damage);

	int Health();
};

