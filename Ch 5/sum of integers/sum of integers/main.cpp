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

void main()
{
	vector<double> numbers;
	vector<double> difference;
	cout << "Enter quantity of summable values: ";
	int quantity;
	cin >> quantity;
	cout << "Input some intereg numbers (| for end):" << endl;
	for (int num; cin >> num; )
	{
		numbers.push_back(num);
	}
	for (int i = 1; i < numbers.size(); ++i)
	{
		difference.push_back(numbers[i] - numbers[i - 1]);
	}

	int res = 0;
	if (quantity >> numbers.size() || quantity <= 0)
	{
		cout << "Incorrect quantity!" << endl;
		exit(1);
	}

	cout << "Sum of first " << quantity << " numbers (";
	for (int i = 0; i < quantity; ++i)
	{
		res = check__<int>((long long)numbers[i] + (long long)res);
		cout << " " << numbers[i] << " ";
	}
	cout << "): " << res << endl;

	for (auto el : difference)
	{
		cout << el << endl;
	}
}