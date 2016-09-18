// Lab_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vector.h"

using namespace std;
using kr_app::vector;

	int main()
	{
		cout << "Setting up everything..." << endl;
		vector direct(0.001,2.2,1.77);
		cout << "Values in vector are: x - " << direct.get_x() << " y - " << direct.get_y() << " z - " << direct.get_z() << endl;
		cout << "Vector mod - " << direct.get_mod() << endl;
		cout << "Multiply vector by 2, for example" << endl;
			direct.make_multiply_scalar(2);
		cout << "Values in Multiplied vector are: x - " << direct.get_x() << " y - " << direct.get_y() << " z - " << direct.get_z() << endl;
		cout << "Makin crackin unit vector" << endl;
			direct.make_unit_vector();
		cout << "Values in vector are: x - " << direct.get_x() << " y - " << direct.get_y() << " z - " << direct.get_z() << endl;


		getchar();
		return 0;
	}

