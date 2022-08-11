#pragma once
class rotation {


public:

	rotation() {

		x = 0;
		y = 0;
		z = 0;
	}


	rotation(int X, int Y, int Z) {

		x = X;
		y = Y;
		z = Z;
	}


	rotation(const rotation &other) {


		x = other.x;
		y = other.y;
		z = other.z;
	}


	void setX(int X) {

		x = X;

	}


	void setY(int Y) {

		y = Y;

	}


	void setZ(int Z) {

		this->z = Z;

	}


	int getX() {

		return this->x;
	}


	int getY() {

		return this->y;
	}


	int getZ() {

		return this->z;

	}


private:

	int x;

	int y;

	int z;
};