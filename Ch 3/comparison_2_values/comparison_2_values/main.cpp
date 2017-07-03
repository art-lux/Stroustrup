#include <iostream>
#include <string>

using namespace std;

template <typename T>
T from_two_max(T a, T b)
{
	return a > b ? a : b;
}

template <typename T>
void from_min_to_max_out(T a, T b, T c)
{
	//T max, min, mid;
	//max = from_two_max(a, b);
	//if (max == a)
	//{
	//	min = b;
	//}
	//else
	//{
	//	min = a;
	//}

	T max = c > (max = (a > b ? a : b)) ? c : max;
	T min = c < (min = (a < b ? a : b)) ? c : min;
	T mid = c > (mid = (a > b ? b : a)) ? c : mid;
	cout << min << endl 
		 //<< mid << endl 
		 << max << endl;
}

void main()
{
	from_min_to_max_out(1, 2, 3);
}