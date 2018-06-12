#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int dp = 5;
	vector<int> mass(100);
	for (int i = 0; i < mass.size(); ++i)
	{
		mass[i] = rand() % dp;
	}
	vector<int> res(dp, 0);
	vector<int>::iterator fn;
	for (int i = 0; i < mass.size(); ++i)
	{
		fn = find(mass.begin() + i, mass.end(), mass[i]);
		if (fn == mass.end())
		{
			continue;
		}
		res[*fn] += 1;
	}
	for (auto el : mass)
	{
		cout << el << endl;
	}
	cout << endl << endl;
	int mode = 0;
	for (int i = 0; i < res.size(); ++i)
	{
		cout << res[i] << endl;
		if (res[i] > mode) mode = i;
	}
	cout << "mode: " << mode << endl;
	return 0;
}