#include "stdafx.h"
#include "vector.h"

namespace kr_app {

	/*vector::vector()
	{
		printf("	Zeroing construcror\n");
		x = 0;
		y = 0;
		z = 0;
	}*/

	vector::vector(double X, double Y, double Z)
	{
		printf("	Default constructor :D\n");
		x = X;
		y = Y;
		z = Z;
	}

	vector vector::operator+(vector K)
	{
		this->set_x(this->get_x() + K.get_x());
		this->set_y(this->get_y() + K.get_y());
		this->set_z(this->get_z() + K.get_z());
		return vector();
	}

	vector vector::operator-(vector K)
	{
		this->set_x(this->get_x() - K.get_x());
		this->set_y(this->get_y() - K.get_y());
		this->set_z(this->get_z() - K.get_z());
		return vector();
	}

	vector vector::operator=(vector K)
	{
		this->set_x(K.get_x());
		this->set_y(K.get_y());
		this->set_z(K.get_z());
		return vector();
	}

	vector::~vector()
	{
		printf("	Default destructor\n");
	}

	double vector::get_x(void)
	{
		return x;
	}
	double vector::get_y(void)
	{
		return y;
	}
	double vector::get_z(void)
	{
		return z;
	}
	void vector::set_x(double input)
	{
		x = input;
	}
	void vector::set_y(double input)
	{
		y = input;
	}
	void vector::set_z(double input)
	{
		z = input;
	}

	double vector::get_mod(void)
	{
		return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	}

	void vector::make_multiply_scalar(int scalar)
	{
		x *= scalar;
		y *= scalar;
		z *= scalar;
	}

	void vector::make_unit_vector(void)
	{
		x = x / get_mod();
		y = y / get_mod();
		z = z / get_mod();
	}

	void vector::cpy_vector(vector b)
	{
		// from b to this
		this->set_x(b.get_x());
		this->set_y(b.get_y());
		this->set_z(b.get_z());
		//return result;

		//make what must go wrong
	}



}