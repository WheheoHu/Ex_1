#pragma once
class CoordinateXY
{
public:
	CoordinateXY(int coorX,int coorY);
	~CoordinateXY();

	int getCoorX() {
		return CoordinateX;
	}
	int getCoorY() {
		return CoordinateY;
	}
private:
	int CoordinateX;
	int CoordinateY;
};

