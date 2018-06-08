#include <iostream>
#include <string>

using namespace std;

constexpr double cm_coeff = 0.01, in_coef = 2.54 * cm_coeff, ft_coef = 12 * in_coef;

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

		if ("cm" == unit)
		{
			input *= cm_coeff;
		}
		if ("in" == unit)
		{
			input *= in_coef;
		}
		if ("ft" == unit)
		{
			input *= ft_coef;
		}

		sum += input;

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
	cout << "Sum: " << sum << endl;
}
