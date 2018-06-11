#include <iostream>
#include <chrono>
#include <thread>

using namespace std;


int main()
{
	for (unsigned char x = 0; x < 255; x++)
	{
		cout << (int)x << ": " << x << endl;
		this_thread::sleep_for(chrono::milliseconds(50) );
	}
	return 0;
}