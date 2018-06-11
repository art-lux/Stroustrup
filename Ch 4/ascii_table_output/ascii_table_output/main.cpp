#include <iostream>
#include <chrono>
#include <thread>

using namespace std;


int main()
{
	//for (unsigned char x = 0; x < 255; x++)
	//{
	//	cout << (int)x << ": " << x << endl;
	//	this_thread::sleep_for(chrono::milliseconds(50) );
	//}

	unsigned char x = 0;
	while (x != 255)
	{
		cout << (int)x << ": " << x << endl;
		this_thread::sleep_for(chrono::milliseconds(50) );
		++x;
	}

	return 0;
}