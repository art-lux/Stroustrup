#include <iostream>

using namespace std;

double ctok(double с) // Преобразует темпера туру
{ // в градусах Цель сия в темпера туру в градуса х Кельвина
	double k = с + 273.15;
	return k;
}

int main()
{
	double c = 0;
	for (;;) {
		cin >> c;
		if (c > -273.15) break;
		cout << "incorrect input!\n" << endl;
	}
	double k = ctok(c);
	cout << k << endl;
}