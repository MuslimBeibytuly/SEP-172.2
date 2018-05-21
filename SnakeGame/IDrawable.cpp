#include "IDrawable.h"

void IDrawable::draw()
{
	for (Pixel pixel : body)
	{
		pixel.draw(sign);
	}
}

IDrawable::IDrawable()
{
}


IDrawable::~IDrawable()
{
}
