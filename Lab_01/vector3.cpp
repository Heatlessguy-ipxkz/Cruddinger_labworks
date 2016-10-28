#include "stdafx.h"
#include "vector3.h"


namespace kr_app {
	vector3::vector3()
	{
		x = 0;
		y = 0;
		z = 0;
		printf("Default constuctior, values are:\n");
		print_xyz();
	}

	vector3::vector3(double X, double Y, double Z)
	{
		x = X;
		y = Y;
		z = Z;
		printf("Default constuctior with params, values are:\n");
		print_xyz();
	}

	vector3::vector3(vector3 &arg)
	{
		/*x = arg.get_x;
		y = arg.get_y;
		z = arg.get_z;
		printf("Default copying constuctior, values are:\n");
		print_xyz();  */
	}


	vector3::~vector3()
	{
		printf("Default destructor, halt");
	}

	void vector3::print_xyz()
	{
		printf("x-%.4lf, y-%.4lf, z-%.4lf", x, y, z);
	}

	double vector3::get_x()
	{
		return x;
	}

	double vector3::get_y()
	{
		return y;
	}

	double vector3::get_z()
	{
		return z;
	}

	void vector3::set_x(double)
	{
	}

	void vector3::set_y(double)
	{
	}

	void vector3::set_z(double)
	{
	}

	double vector3::return_mod(void)
	{
		return 0.0;
	}

	void vector3::make_multiply_scalar(int)
	{
	}

	void vector3::make_unit_vector(void)
	{
	}
}