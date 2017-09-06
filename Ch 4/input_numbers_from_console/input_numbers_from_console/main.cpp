#include <iostream>

using namespace std;

void main()
{
	int input1, input2;
	while (cin >> input1 >> input2)
	{
		if (input1 > input2)
		{
			cout << "the largest value is: " << input1 << endl;
			cout << "the smallest value is: " << input2 << endl;
		}
		else
		{
			cout << "the largest value is: " << input2 << endl;
			cout << "the smallest value is: " << input1 << endl;
		}
	}
}
