// Lab_02.cpp
// < Михайлів Богдан >
// Ëàáîðàòîðíà ðîáîòà ¹ 2.1
// Ë³í³éí³ ïðîãðàìè.
// Варіант 16

#include <iostream>

using namespace std;

int main()

{
	double x;

	double z1;

	double z2;

	cout << "x= "; cin >> x;

	z1 = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9));

	z2 = sqrt((x + 3) / (x - 3));

	cout << endl;

	cout << "z1 = " << z1 << endl;

	cout << "z2 = " << z2 << endl;

	cin.get();

	return 0;
}
