#include <iostream>

using namespace std;

int main()
{
	cout << "Input a, b, c coef" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	double descr = b * b - 4 * a* c;
	if (descr < 0)
	{
		cout << "No roots" << endl;
		return 0;
	}
	cout << sqrt(descr) << endl;
	double res1 = (-b + sqrt(descr)) / (2 * a);
	double res2 = (-b - sqrt(descr)) / (2 * a);
	cout << "res1: " << res1 << endl;
	cout << "res2: " << res2 << endl;
	return 0;
}