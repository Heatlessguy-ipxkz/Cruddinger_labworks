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
		vector x(1.5, 2.0, 2.5);
		vector y(2, 3, 4);
		vector z = y - x;
		cout << z.get_x() << endl << z.get_x() << endl << z.get_z() << endl;
		

		system("pause");

		return 0;
	}

	//basic calculating things
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

	//Multipliin by scalar, works
	vector calc_mul_scalar(vector a, vector b) {
		vector result(0, 0, 0);
		result.set_x(a.get_x() * b.get_x());
		result.set_y(a.get_y() * b.get_y());
		result.set_z(a.get_z() * b.get_z());
		return result;
	};

		
	/*vector calc_mul_vector(vector a, vector b) {
		vector result(0, 0, 0);
		result.set_x(a.get_y() * b.get_z() - a.get_z() * b.get_y());
		result.set_y(a.get_z() * b.get_x() - a.get_x() * b.get_z());
		result.set_z(a.get_x() * b.get_y() - a.get_y() * b.get_x());

		return result;

	};*/