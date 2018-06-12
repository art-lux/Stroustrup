#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> primes(n);
	primes[0] = 0;
	for (int i = 1; i < n; ++i)
		primes[i] = 1;
	for (int i = 2; i*i <= n-1; ++i)
	{
		if (primes[i] == 1)
		{
			for (int l = i * i; l <= n-1; l += i)
				primes[l] = 0;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (primes[i] == 1)
			cout << i << endl;
	}
	return 0;
}