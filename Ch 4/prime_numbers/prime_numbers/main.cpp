#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num)
{
	if (1 == num)
		return false;
	for (int i = 2; i * i <= num; ++i)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	vector<int> primes;
	int max;
	cin >> max;
	//for (int i = 1; i < max; ++i)
	//{
	//	if (isPrime(i))
	//		primes.push_back(i);
	//}

	for (int i = 0; ;++i)
	{
		if (isPrime(i))
			primes.push_back(i);
		if (primes.size() > max)
			break;
	}

	for (auto el : primes)
	{
		cout << el << endl;
	}
	cout << "Size: " << primes.size() << endl;
	return 0;
}