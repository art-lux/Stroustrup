#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		auto res = rand() % 3 + 1;
		switch (res)
		{
		case 1:
			cout << "Rock" << endl;
			break;
		case 2:
			cout << "Scissors" << endl;
			break;
		case 3:
			cout << "Paper" << endl;
			break;
		default:
			break;
		}
	}
	return 0;
}