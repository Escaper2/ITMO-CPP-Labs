class index {


public:

	index() {

		x = 0;
		y = 0;
		z = 0;
	}


	index(int X, int Y, int Z) {

		x = X;
		y = Y;
		z = Z;
	}



	index(const index &other) {

		x = other.x;
		y = other.y;
		z = other.z;
	}


	int getIndX() {

		return x;
	}

	int getIndY() {

		return y;
	}

	int getIndZ() {


		return z;
	}

	void setIndX(int X) {


		this->x = X;
	}

	void setIndY(int Y) {


		this->y = Y;
	}

	void setIndZ(int Z) {


		this->z = Z;
	}

private:

	int x;

	int y;

	int z;
};