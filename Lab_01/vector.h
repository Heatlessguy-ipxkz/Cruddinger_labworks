#pragma once

namespace kr_app {

	class vector
	{
	private:
		double x;
		double y;
		double z;
	public:
		//vector();
		vector (double X=0, double Y=0, double Z=0);
		vector(vector &);
		vector operator +(vector K);
		vector operator -(vector K);
		vector operator =(vector K);
		~vector();

		void print_xyz();
		double get_x();
		double get_y();
		double get_z();

		void set_x(double);
		void set_y(double);
		void set_z(double);

		double get_mod(void);
		void make_multiply_scalar(int);
		void make_multiply(vector a, vector b);
		void make_unit_vector(void);

		void cpy_vector(vector);

	};

}
