#pragma once
class CoordinateXY
{
public:
	CoordinateXY(int coorX,int coorY);
	CoordinateXY();
	~CoordinateXY();
	void setX(int x);
	void setY(int y);
	//���x����
	int getCoorX() {
		
		return CoordinateX;
	}

	//���Y����
	int getCoorY() {
		return CoordinateY;
	}
private:
	int CoordinateX;
	int CoordinateY;
};

