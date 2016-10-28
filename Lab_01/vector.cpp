#include "stdafx.h"
#include "vector.h"

namespace kr_app {

	//nonparam constructor
	vector::vector()
	{
		printf("	Zeroing construcror\n");
		x = 0;
		y = 0;
		z = 0;
	}

	//param constructor
	vector::vector(double X, double Y, double Z)
	{
		printf("	Default constructor \n");
		x = X;
		y = Y;
		z = Z;
	}

	//cpy constructor
	vector::vector(vector &pull)
	{
		set_x(pull.get_x());
		set_y(pull.get_y());
		set_z(pull.get_z());
	}


	/*
	vector vector::operator+(vector K)
	{
		this->set_x(get_x() + K.get_x());
		this->set_y(get_y() + K.get_y());
		this->set_z(get_z() + K.get_z());
		return vector(x, y, z);
	}

	vector vector::operator-(vector K)
	{
		set_x(get_x() - K.get_x());
		set_y(get_y() - K.get_y());
		set_z(get_z() - K.get_z());
		return vector();
	}

	vector vector::operator=(vector K)
	{
		set_x(K.get_x());
		set_y(K.get_y());
		set_z(K.get_z());
		return vector();
	}
	
	vector::~vector()
	{
		printf("	Default destructor\n");
	}
	*/
	void vector::print_xyz()
	{
		printf("x - %lf, y - %lf, z - %lf \n", get_x(), get_y(), get_z());
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

	void vector::make_multiply(vector a, vector b)
	{
		set_x((a.get_y() * b.get_z()) - (a.get_z() * b.get_y()));
		set_y(a.get_z() * b.get_x() - a.get_x() * b.get_z());
		set_z(a.get_x() * b.get_y() - a.get_y() * b.get_x());
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
		set_x(b.get_x());
		set_y(b.get_y());
		set_z(b.get_z());
		//return result;

		//make what must go wrong
	}



}