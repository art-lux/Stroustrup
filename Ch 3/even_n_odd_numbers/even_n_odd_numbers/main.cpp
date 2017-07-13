#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void main()
{
	string res;
	cout << "Input 0 for exit." << endl;
	while (cin >> res)
	{
		if (int number = atoi(res.c_str()))
		{
			cout << "Number " << number << " is ";
			if (number % 2 == 0)
			{
				cout << "even." << endl;
			}
			else
			{
				cout << "odd." << endl;
			}
		}
		else
		{
			break;
		}
	}
}