#include <iostream>

using namespace std;

double ctof(double c) 
{
	if (c < -273.15)
	{
		cout << "incorrect input!\n" << endl;
		exit(1);
	}
	double f = c * 1.8 + 32;
	return f;
}

double ftoc(double f)
{
	if (f < -459.67)
	{
		cout << "incorrect input!\n" << endl;
		exit(1);
	}
	return (f - 32) * 5 / 9;
}

int main()
{
	double c = 0;
	char t;
	cout << "Enter temp and system('f' or 'c'): ";
	cin >> c >> t;
	double k;
	switch (t)
	{
	case 'f':
		k = ftoc(c);
		break;
	case 'c':
		k = ctof(c);
		break;
	default:
		cout << "Incorrect system!\n";
		return 1;
		break;
	}
	cout << k << endl;
}