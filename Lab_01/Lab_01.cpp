// Lab_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vector.h"

using namespace std;
using kr_app::vector;

vector calc_sum(vector, vector);
vector calc_dis(vector, vector);
vector calc_mul_scalar(vector, vector);
vector calc_mul_vector(vector, vector);

	int main()
	{
		cout << "Setting up everything..." << endl;
		vector direct;
		cout << direct.get_x() << endl;
		vector direct2;
		cout << direct2.get_x() << endl;
		getchar();
		return 0;
	}

	vector calc_sum(vector a, vector b) {
		vector result(0,0,0);
		result.set_x(a.get_x() + b.get_x());
		result.set_y(a.get_y() + b.get_y());
		result.set_z(a.get_z() + b.get_z());
		return result;
	};

	vector calc_dis(vector a, vector b) {
		vector result(0, 0, 0);
		result.set_x(a.get_x() - b.get_x());
		result.set_y(a.get_y() - b.get_y());
		result.set_z(a.get_z() - b.get_z());
		return result;
	};

	vector calc_mul_scalar(vector a, vector b) {
		vector result(0, 0, 0);
		result.set_x(a.get_x() * b.get_x());
		result.set_y(a.get_y() * b.get_y());
		result.set_z(a.get_z() * b.get_z());
		return result;
	};

		
	vector calc_mul_vector(vector a, vector b) {
		vector result(0, 0, 0);
		double temp = a.get_y();
		result.set_x(temp);

		temp = a.get_z() * b.get_x() - a.get_x() * b.get_z();
		result.set_y(temp);

		temp = a.get_x() * b.get_y() - a.get_y() * b.get_x();
		result.set_z(temp);

		return result;

	};