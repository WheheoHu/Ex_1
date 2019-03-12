#include "CoordinateXY.h"






CoordinateXY::CoordinateXY(int coorX, int coorY)
{
	CoordinateX = coorX;
	CoordinateY = coorY;
}

CoordinateXY::CoordinateXY()
{
}

CoordinateXY::~CoordinateXY()
{
}

void CoordinateXY::setX(int x)
{
	CoordinateX = x;
}

void CoordinateXY::setY(int y)
{
	CoordinateY = y;
}
