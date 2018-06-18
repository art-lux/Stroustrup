#include <iostream>

using namespace std;

double ctok(double c) // Преобразует темпера туру
{ // в градусах Цель сия в темпера туру в градуса х Кельвина
	if (c < -273.15)
	{
		cout << "incorrect input!\n" << endl;
		exit(1);
	}
	double k = c + 273.15;
	return k;
}

double ktoc(double k)
{
	return k - 273.15;
}

int main()
{
	double c = 0;
	char t;
	cout << "Enter temp and system('k' or 'c'): ";
	cin >> c >> t;
	double k;
	switch (t)
	{
	case 'k':
		k = ktoc(c);
		break;
	case 'c':
		k = ctok(c);
		break;
	default:
		cout << "Incorrect system!\n";
		return 1;
		break;
	}
	cout << k << endl;
}