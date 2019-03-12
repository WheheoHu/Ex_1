#pragma once
class CoordinateXY
{
public:
	CoordinateXY(int coorX,int coorY);
	CoordinateXY();
	~CoordinateXY();
	void setX(int x);
	void setY(int y);
	//获得x坐标
	int getCoorX() {
		
		return CoordinateX;
	}

	//获得Y坐标
	int getCoorY() {
		return CoordinateY;
	}
private:
	int CoordinateX;
	int CoordinateY;
};

