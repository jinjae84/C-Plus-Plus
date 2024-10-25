#include "Pencil.h"

Pencil::Pencil()
{
	thickness = 0.5f;
}

void Pencil::Draw()
{
	cout << "PencilÀÇ ±½±â : " << thickness << endl;
	cout << "Pencil Draw" << endl;
}

Pencil::~Pencil()
{
	cout << "Release Pencil" << endl;
}
