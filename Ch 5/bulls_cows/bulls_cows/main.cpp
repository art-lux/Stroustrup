#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
start:
	vector<unsigned int> number;
	do
	{
		unsigned int nm = rand() % 10;
		bool isExist = false;
		for (auto el : number)
		{
			if (el == nm) { isExist = true; }
		}
		if (!isExist)
		{
			number.push_back(nm);
		}
	} while (number.size() < 4);

	for (auto el : number)
	{
		cout << el;
	}
	cout << endl;

	unsigned int bulls = 0, cows = 0;
	for (unsigned int guess_nm; cin >> guess_nm;)
	{
		if (guess_nm < 1 || guess_nm >= 10000)
		{
			cout << "wrong input, retry!" << endl;
			continue;
		}
		bulls = 0; cows = 0;
		for (int i = 4; i > 0; --i)
		{
			unsigned int current = guess_nm % 10;
			cout << current << endl;
			guess_nm /= 10;
			for (int j = number.size() - 1; j >= 0; --j)
			{
				if (number[j] == current)
				{
					if (i == j + 1)
					{
						++bulls;
					}
					else
					{
						++cows;
					}
				}
			}
		}
		cout << "Bulls: " << bulls << endl << "Cows: " << cows << endl;
		if (bulls == 4) break;
	}



	this_thread::sleep_for(chrono::milliseconds(500));
	goto start;
	return 0;
}