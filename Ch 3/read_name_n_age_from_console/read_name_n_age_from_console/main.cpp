#include <iostream>
#include <string>

using namespace std;

void main()
{
	cout << "Enter your name and age, please:\n";
	string first_name = "???";
	double age = -1;
	cin >> first_name >> age;
	cout << "Hi, " << first_name << " (age " << age * 12 << ")\n";
}