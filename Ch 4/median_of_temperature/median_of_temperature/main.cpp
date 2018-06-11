#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
	{
		temps.push_back(temp);
	}

	sort(temps.begin(), temps.end());

	if (temps.size() % 2 == 0)
	{
		cout << (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2 << endl;
	}
	else
	{
		cout << temps[temps.size() / 2] << endl;
	}
		
	return 0;
}