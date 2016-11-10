// Lab_01.cpp : Console app. 
// Maked by a_kr. Всё работает, вроде как. 


#include "stdafx.h"
#include "vector.h"

using namespace std;
using namespace kr_app;

/*vector calc_sum(vector, vector);
vector calc_dis(vector, vector);
vector calc_mul_scalar(vector, vector);*/
//vector calc_mul_vector(vector, vector);
//void print_xyz(vector);




	int main()
	{
		cout << "Setting up everything..." << endl;
		vector v1, v2(5,3,1), v3(10, 1, 2);
			cout << " v1 is:" << endl;
				print_xyz(v1);
			cout << " v2 is:" << endl;
			print_xyz(v2);
			cout << " v3 is:" << endl;
			print_xyz(v3);
			cout << " v2 mod is:" << endl << v2.get_mod() << endl;
		v1 = v2 + v3;
			cout << " v1 = v2 + v3:" << endl;
			print_xyz(v1);
		v1 = v2 - v3;
			cout << " v1 = v2 - v3:" << endl;
			print_xyz(v1);
		v1 = v2 * v3;
			cout << " v1 = v2 * v3 (vector):" << endl;
			print_xyz(v1);
			cout << " v1 = v2 * 2 (scalar):" << endl;
		v1 = v3 * 2;
			print_xyz(v1);
			cout << " v1 = v2 * v3 (scalar):" << endl;
		cout << "scalar v2 v3:  "<< calc_scalar_vector(v3, v2) << endl;
		cout << "cos v2 v3:  " << calc_cos_vector(v3, v2) << endl;
		cout << "sin v2 v3:  " << calc_sin_vector(v3, v2) << endl;
		cout << "angle v2 v3:  " << calc_angle_vector(v3, v2) << endl;


		system("pause");
		
	}


	//Я тут мусор оставлю, присмотрите.
	/* 
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
	};*/

	
	
