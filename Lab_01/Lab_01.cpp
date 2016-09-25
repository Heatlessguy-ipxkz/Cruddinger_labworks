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
		cout << "Setting up everything..." << endl << endl;
		vector zero;
		cout << " Values in zeroed vector are: x - " << zero.get_x() << " y - " << zero.get_y() << " z - " << zero.get_z() << endl;
		vector direct(0.001,2.2,1.77);
		cout << "Values in vector are: x - " << direct.get_x() << " y - " << direct.get_y() << " z - " << direct.get_z() << endl;
		cout << "Vector mod - " << direct.get_mod() << endl;
		cout << "Multiply vector by 2, for example" << endl;
			direct.make_multiply_scalar(2);
			cout << "Values in Multiplied vector are:" << endl;
			direct.print_xyz();
		cout << "Makin crackin unit vector" << endl;
			direct.make_unit_vector();
		cout << "Values in vector are:" << endl;
		direct.print_xyz();

		vector direct2(0,0,0);
		
		direct2.cpy_vector(direct);
		direct2.make_multiply_scalar(2);

		vector multiplied(0, 0, 0);
		multiplied.make_multiply(direct, direct2);

		cout << "Values in vector2 are: x - "<< endl;
		direct2.print_xyz();
		cout << "Values in multiplied vector are:" << endl;
		multiplied.print_xyz();




		getchar();
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