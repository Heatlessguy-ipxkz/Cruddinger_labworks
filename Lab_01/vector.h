#pragma once

namespace kr_app {

	class vector
	{
	private:
		double x;
		double y;
		double z;
	public:
		vector();
		vector(double X =0, double Y =0, double Z =0);
		~vector();

		double get_x(void);
		double get_y(void);
		double get_z(void);

		void set_x(double);
		void set_y(double);
		void set_z(double);

		double get_mod(void);
		void make_multiply_scalar(int);
		void make_unit_vector(void);

		bool cpy_vector(vector);

	};

}
