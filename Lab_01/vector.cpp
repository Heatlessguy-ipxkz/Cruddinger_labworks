#include "stdafx.h"
#include "vector.h"

namespace kr_app {

	vector::vector()
	{
		printf("Default construcror\n");
		set_x(0.0);
		set_y(0.0);
		set_z(0.0);
	}

	vector::vector(double X, double Y, double Z)
	{
		printf("NonDefault construcror \n");
		x = X;
		y = Y;
		z = Z;
	}
	
	/*vector::~vector()
	{
		printf("Default destructor\n");
	} */

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

	bool vector::cpy_vector(vector b) //return true if ok
	{
		// from b to this
		set_x(b.get_x());
		set_y(b.get_y());
		set_z(b.get_z());
		return true;

		//make what must go wrong
	}



}