// BuoyantForce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
#pragma warning(disable: 4996)
using namespace std;

int main()
{
	const double PI = 3.141592, WATER_WEIGHT = 62.4;

	double volume, rad, buoyantForce, weight;
	int recalc;


    cout << "This program computes Buoyant Force in water given sphere radius.\n"
		 <<"Based on the weight of the sphere, it determines whether the sphere floats or sinks.\n"
		 <<"\n";

	do {

		cout << "Enter the radius of the sphere.\n";
		cin  >> rad;
		cout << "You entered " << rad << "\n"
			 <<"\n";

		cout << "Enter the weight of the sphere.\n";
		cin >> weight;
		cout << "You entered " << weight << "\n"
		<< "\n";

		volume = 4.0/3 * PI * pow(rad,3);

		buoyantForce = volume * WATER_WEIGHT;

		cout << "Buoyant Force =" << buoyantForce << "\n"
			 << "\n";

		if (buoyantForce >= weight) { cout << "Egads! It floats!\n"; }

		else cout << "It sunk...\n"
		          << "\n";

			cout << "Recalculate? (1=yes, 0=exit)\n";
			cin >> recalc;
	
	} while (recalc == 1);

	system("PAUSE");
	return 0;
}

