#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum Day
{
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday,
	undefined
};

Day check_enter(string& str)
{
	if (str == "monday" || str == "Monday" || str == "mon" || str == "Mon") return Day::monday;
	else if (str == "tuesday" || str == "Tuesday" || str == "tue" || str == "Tue") return Day::tuesday;
	else if (str == "wednesday" || str == "Wednesday" || str == "wed" || str == "Wed") return Day::wednesday;
	else if (str == "thursday" || str == "Thursday" || str == "thu" || str == "Thu") return Day::thursday;
	else if (str == "friday" || str == "Friday" || str == "fri" || str == "Fri") return Day::friday;
	else if (str == "saturday" || str == "Saturday" || str == "sat" || str == "Sat") return Day::saturday;
	else if (str == "sunday" || str == "Sunday" || str == "sun" || str == "Sun") return Day::sunday;
	else return Day::undefined;
}
int main()
{
	string d_str[7] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
	vector<int> vk[7];
	string day;
	int number = 0;
	int wrong_count = 0;
	for (cout << "Enter day(for exit press q or Q): "; cin >> day; cout << "Enter day: ")
	{
		if ("q" == day || "Q" == day) break;
		Day current = check_enter(day);
		if (Day::undefined == current)
		{
			++wrong_count;
			cout << "Wrong enter! Retry!" << endl;
			continue;
		}
		cout << "Enter number: ";
		cin >> number;
		vk[current].push_back(number);
	}

	for (int i = 0; i < 7; ++i)
	{
		int sum = 0;
		cout << d_str[i] << ": " << endl;
		for (auto el : vk[i])
		{
			cout << el << endl;
			sum += el;
		}
		cout << "Sum for " << d_str[i] << " : " << sum << endl << endl;
	}
	cout << "Wrong entring: " << wrong_count << endl;

	return 0;
}