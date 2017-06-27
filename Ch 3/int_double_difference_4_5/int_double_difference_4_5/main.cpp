#include <iostream>

using namespace std;

void int_incoming(int a, int b)
{
	if (a == b)
	{
		cout << "Equal numbers.\n";
	}
	else
	{
		cout << "Max: " << ((a > b) ? a : b) << endl;
	}
	cout << "Sum: " << a + b << endl;
	cout << "Difference: " << a - b << endl;
	cout << "Product: " << a * b << endl;
	cout << "Quotient: " << a / b << endl;
}

void double_incoming(double a, double b)
{
	if (a == b)
	{
		cout << "Equal numbers.\n";
	}
	else
	{
		cout << "Max: ";
		if (a > b)
		{
			cout << a << endl;
		}
		else
		{
			cout << b << endl;
		}
	}
	cout << "Sum: " << a + b << endl;
	cout << "Difference: " << a - b << endl;
	cout << "Product: " << a * b << endl;
	cout << "Quotient: " << a / b << endl;
}

void main()
{
	double a, b;
	cout << "Enter 2 number:\n";
	cin >> a >> b;
	int_incoming(a, b);
	cout << endl;
	double_incoming(a, b);
}