#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> digits_str{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
const vector<string> digits{ "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

int check_index(const string& str, const vector<string>& vec)
{
	int res = -1;
	auto it_start = vec.cbegin(), it_end = vec.cend();
	auto it = find(it_start, it_end, str);
	if (it != it_end)
	{
		res = it - it_start;
	}
	return res;
}

int check_input(const string& str)
{
	
	if (str.size() > 1)
	{
		return check_index(str, digits_str);
	}
	return check_index(str, digits);
}



int main()
{
	string arg1_str, arg2_str;
	char operation;
	cout << "Input two positive integers from 0 to 9 and operation with them(+, -, *, /)" << endl;
	cin >> arg1_str >> arg2_str >> operation;
	
	int arg1 = check_input(arg1_str);
	int arg2 = check_input(arg2_str);
	if (arg1 == -1 || arg2 == -1)
	{
		cout << "Invalid input!" << endl;
		return 1;
	}

	switch (operation)
	{
	case '+':
		cout << "Sum " << digits[arg1] << " and " << digits[arg2] << " is " << arg1 + arg2 << endl;
		break;
	case '-':
		cout << "Difference " << digits[arg1] << " and " << digits[arg2] << " is " << arg1 - arg2 << endl;
		break;
	case '*':
		cout << "Composition " << digits[arg1] << " and " << digits[arg2] << " is " << arg1 * arg2 << endl;
		break;
	case '/':
		cout << "Quotient " << digits[arg1] << " and " << digits[arg2] << " is " << arg1 / arg2 << endl;
		break;

	default:
		cout << "Invalid operation!" << endl;
		break;
	}
	return 0;
}