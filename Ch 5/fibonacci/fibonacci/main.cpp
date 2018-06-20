#include <iostream>
#include <vector>

using namespace std;

template <typename T, typename R>
T check__(const R& r)
{
	T t = T(r);
	if (R(t) != r) { cout << "Type overflow!" << endl; exit(1); }
	return t;
}


int main()
{
	vector<int> fb(2,1);
	cout << fb[0] << endl << fb[1] << endl;
	for (int i = 1; ; ++i)
	{
		fb.push_back(check__<int>((long long)fb[i] + long long(fb[i - 1])));
		cout << fb[i + 1] << endl;
	}
	return 0;
}