#include <iostream>
#include <string>

using namespace std;

bool isCorrectUnit(string& str)
{
	return str == "cm" || str == "in" || str == "ft" || str == "m";
}

void main()
{
	double input, max_value(numeric_limits<double>::min()), min_value(numeric_limits<double>::max()), sum = 0;
	int input_counter = 0;
	string unit;
	while (cin >> input >> unit)
	{
		if (!isCorrectUnit(unit))
		{
			continue;
		}
		++input_counter;
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
	cout << "the largest value was: " << max_value << endl;
	cout << "the smallest value was: " << min_value << endl;
	cout << "quantity of correct input was: " << input_counter << endl;
}
