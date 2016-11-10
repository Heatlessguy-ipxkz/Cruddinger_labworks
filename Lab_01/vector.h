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
		~vector();

		//Getters
		double get_x(void);
		double get_y(void);
		double get_z(void);
		//Setters
		void set_x(double);
		void set_y(double);
		void set_z(double);

		//Метод нахождения моудля this вектора
		double get_mod(void);
		//Метод нахождения единичного this вектора
		void make_unit_vector(void);

		/*Выпилено, реализовано в виде перегруженного оператора умножения
		//void make_multiply_scalar(int);*/
		//См. конструктор копирования
		//void cpy_vector(vector);
	};
	//Скалярное умножение векторов
	double calc_scalar_vector(vector, vector);
	//Функция вывода значений вектора в консольку
	void print_xyz(vector);
	//Функция подсчёта косинуса угла между векторами
	double calc_cos_vector(vector, vector);
	//Функция подсчёта синуса угла между векторами
	double calc_sin_vector(vector, vector);
	//Функция подсчёта угла между векторами
	double calc_angle_vector(vector, vector);
	//Скалярное произведение
	
}
