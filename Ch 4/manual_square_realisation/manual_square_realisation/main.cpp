#include <iostream>

using namespace std;

unsigned long square(int x)
{
	unsigned long res = 0;
	x = abs(x);
	for (int z = 0; z < x; ++z)
	{
		res += x;
	}
	return res;
}

int main()
{
	int input;
	cin >> input;
	cout << square(input) << endl;
	return 0;
}