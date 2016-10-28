#pragma once
namespace kr_app {

	class vector3
	{
	private:
		double x, y, z;
	public:
		vector3();
		vector3(double X, double Y, double Z);
		vector3(vector3 &arg);
		~vector3();

		void print_xyz();

		double get_x();
		double get_y();
		double get_z();

		void set_x(double);
		void set_y(double);
		void set_z(double);

		double return_mod(void);
		void make_multiply_scalar(int);
		void make_unit_vector(void);

	};

}