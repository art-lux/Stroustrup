#include <iostream>
#include <string>

using namespace std;

int main()
{
	constexpr double usd_coef = 26.04;
	double quantity = 1;
	string unit;
	cout << "Please input the lengh"
		<< " and unit (us or gr) : \n";
	cin >> quantity >> unit;
	if (unit == "us")
		cout << quantity << " usd == "
		<< usd_coef * quantity << " gr\n ";
	else if (unit == "gr")
		cout << quantity << " gr == "
		<< quantity / usd_coef << " usd\n";
	else
		cout << "Sorry, I don't know what is it " << unit << "\n ";
	return 0;
}