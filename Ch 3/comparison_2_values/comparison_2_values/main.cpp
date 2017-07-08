#include <iostream>
#include <string>

using namespace std;

template <typename T>
void from_min_to_max_out(T& a, T& b, T& c)
{
	T mid, max, min;
	max = c > (max = (a > b ? a : b)) ? c : max;
	min = c < (min = (a < b ? a : b)) ? c : min;
	if ((max == a && min == c) || (max == c && min == a))
	{
		mid = b;
	}
	else if((max == b && min == c) || (max == c && min == b))
	{
		mid = a;
	}
	else if ((max == a && min == b) || (max == b && min == a))
	{
		mid = c;
	}
	cout << min << endl 
		 << mid << endl 
		 << max << endl;
}

void main()
{
	int a = 1, b = 2, c = 3;
	from_min_to_max_out(a, b, c);
	from_min_to_max_out(string("abc"),string("cda"), string("bcd"));
}