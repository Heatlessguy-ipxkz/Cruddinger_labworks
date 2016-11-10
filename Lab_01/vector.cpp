#include "stdafx.h"
#include "vector.h"
using namespace std;

namespace kr_app {

	vector::vector()
	{
		//printf("Default construcror\n");
		set_x(0.0);
		set_y(0.0);
		set_z(0.0);
	}

	vector::vector(double X, double Y, double Z)
	{
		//printf("NonDefault construcror\n");
		x = X;
		y = Y;
		z = Z;
	}


	//Оператор сложения векторов
	vector vector::operator+(vector a)
	{
		return vector(a.get_x() + this->get_x(), a.get_y() + this->get_y(), a.get_z() + this->get_z());
	}
	//Оператор вычитания векторов(мб понадобится)
	vector vector::operator-(vector a)
	{
		return vector(this->get_x() - a.get_x(), this->get_y() - a.get_y(), this->get_z() - a.get_z());
	}
	///Оператор векторного умножения
	vector vector::operator* (vector b)
	{
		return vector(this->get_y()*b.get_z() - this->get_z()*b.get_y(), this->get_z()*b.get_x() - this->get_x()*b.get_z(), this->get_x()*b.get_y() - this->get_y()*b.get_x());
	}
	
	//Оператор умножения на скаляр. Скаляр в int, да.
	vector vector::operator*(int a)
	{
		return vector(this->get_x() * a, this->get_y() * a, this->get_z() * a);
	}

	vector::~vector()
	{
	}

	// Методы ввода/вывода
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

	//Метод нахождения модуля вектора. 
	double vector::get_mod(void)
	{
		return sqrt(pow(this->get_x(), 2) + pow(this->get_y(), 2) + pow(this->get_z(), 2));
	}

	/* РЕАЛИЗОВАНО ПЕРЕГРУЗКОЙ ОПЕРАТОРА, НО ЭТОТ МУСОР ОСТАВЛЮ ТУТ ДО ЛУЧШИХ ВРЕМЕН.
	void vector::make_multiply_scalar(int scalar)
	{
		x *= scalar;
		y *= scalar;
		z *= scalar;
	} */

	void vector::make_unit_vector(void)
	{
		x = x / get_mod();
		y = y / get_mod();
		z = z / get_mod();
	}



	/*
	void vector::cpy_vector(vector b)
	{
		// from b to this
		set_x(b.get_x());
		set_y(b.get_y());
		set_z(b.get_z());

		//make what must go wrong
	}*/

	double calc_scalar_vector(vector a, vector b) {
		return b.get_x() * a.get_x() + b.get_y() * a.get_y() + b.get_z() * a.get_z();
	}

	void print_xyz(vector v) {
		std::cout << v.get_x() << " " << v.get_y() << " " << v.get_z() << std::endl;
	}

	double calc_cos_vector(vector a, vector b)
	{
		return calc_scalar_vector(a, b) / (a.get_mod() * b.get_mod());
	}
	double calc_sin_vector(vector a, vector b)
	{
		vector c = a * b;
		return (c.get_mod() / (a.get_mod() * b.get_mod()));
		///Как делать не надо закоменчено. Оставлял для проверки. Приблизительно верно.
		//return sqrt(1 - pow((calc_cos_vector(a, b)), 2)); 
	}

	double calc_angle_vector(vector a, vector b)
	{
		double c = atan2(calc_sin_vector(a, b), calc_cos_vector(a, b)) * 180 * M_PI;
		if (c > 180) {
			return c - 360;
		}
		else if (c < -180) {
			return c + 360;
		}
		else return c;
	}
}