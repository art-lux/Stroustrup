#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char check_unit_sw(string& str)
{
	return str[0];
}

int main()
{
	constexpr double usd_coef = 26.04;
	double quantity = nan("");
	string unit;
	cout << "Please input the lengh"
		<< " and unit (us or gr) : \n";
	cin >> quantity >> unit;
	
	switch (check_unit_sw(unit))
	{
	case 'u':
		cout << quantity << " usd == "
			<< usd_coef * quantity << " gr\n ";
	case 'g':
		cout << quantity << " gr == "
			<< quantity / usd_coef << " usd\n";
	default:
		cout << "Sorry, I don't know what is it " << unit << "\n ";
	}
	
	
	
	//if (unit == "us")
	//	cout << quantity << " usd == "
	//	<< usd_coef * quantity << " gr\n ";
	//else if (unit == "gr")
	//	cout << quantity << " gr == "
	//	<< quantity / usd_coef << " usd\n";
	//else
	//	cout << "Sorry, I don't know what is it " << unit << "\n ";
	return 0;
}