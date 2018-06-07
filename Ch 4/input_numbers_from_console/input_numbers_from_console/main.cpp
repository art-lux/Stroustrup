#include <iostream>

using namespace std;

void main()
{
	double input, max_value(numeric_limits<double>::min()), min_value(numeric_limits<double>::max());
	while (cin >> input)
	{
		if (input > max_value)
		{
			cout << "the largest value is: " << input << endl;
			max_value = input;
		}
		if(input < min_value)
		{
			cout << "the smallest value is: " << input << endl;
			min_value = input;
		}
		
	}
}
