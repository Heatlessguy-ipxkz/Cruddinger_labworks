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

		//����� ���������� ������ this �������
		double get_mod(void);
		//����� ���������� ���������� this �������
		void make_unit_vector(void);

		/*��������, ����������� � ���� �������������� ��������� ���������
		//void make_multiply_scalar(int);*/
		//��. ����������� �����������
		//void cpy_vector(vector);
	};
	//��������� ��������� ��������
	double calc_scalar_vector(vector, vector);
	//������� ������ �������� ������� � ���������
	void print_xyz(vector);
	//������� �������� �������� ���� ����� ���������
	double calc_cos_vector(vector, vector);
	//������� �������� ������ ���� ����� ���������
	double calc_sin_vector(vector, vector);
	//������� �������� ���� ����� ���������
	double calc_angle_vector(vector, vector);
	//��������� ������������
	
}
