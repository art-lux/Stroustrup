#include <iostream>
#include <string>

using namespace std;

void main()
{
	cout << "Input operation and then operands.\n\"* 22 44\" or \"+ 10 74\" - example" << endl;
	string operation;
	double operand1, operand2;
	cin >> operation;
	cin >> operand1;
	cin >> operand2;

	double result = 0;

	if (operation == "+")
	{
		result = operand1 + operand2;
	}
	else if (operation == "-")
	{
		result = operand1 - operand2;
	}
	else if (operation == "*")
	{
		result = operand1 * operand2;
	}
	else if (operation == "/")
	{
		if (operand2)
		{
			result = operand1 / operand2;
		}
		else
		{
			cout << "Wrong operand!!!" << endl;
		}
	}
	else 
	{
		cout << "Wrong operation!!!" << endl;
		exit(1);
	}
	cout << operand1 << " " << operation << " " << operand2 << " = " << result << endl;
}