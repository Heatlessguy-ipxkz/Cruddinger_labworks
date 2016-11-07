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
		vector(double X, double Y, double Z);
		vector operator + (vector a);
		vector operator - (vector a);
		vector operator * (vector a);
		vector operator * (int a);

		double get_x(void);
		double get_y(void);
		double get_z(void);

		void set_x(double);
		void set_y(double);
		void set_z(double);

		double get_mod(void);
		//Выпилено, реализовано в виде перегруженного оператора умножения
		//void make_multiply_scalar(int);
		void make_unit_vector(void);

		//См. конструктор копирования
		//void cpy_vector(vector);

	};

}
