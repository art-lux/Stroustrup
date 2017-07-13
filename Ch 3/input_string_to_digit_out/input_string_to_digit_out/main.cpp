#include <iostream>
#include <string>

using namespace std;

void main()
{
	string buff[] = { "zero",
					"one",
					"two",
					"three",
					"four",
					"five",
					"six",
					"seven",
					"eight",
					"nine",
					"ten" };
	cout << "Input 'q' for quit." << endl;
	string input;
	bool isCorrect = false;
	while (cin >> input)
	{
		if ("q" == input)
		{
			break;
		}
		for (int i = 0; i <= 10; ++i)
		{
			if (buff[i] == input)
			{
				cout << i << endl;
				isCorrect = true;
				break;
			}
		}
		if (!isCorrect)
		{
			cout << "Wrong enter!!!" << endl;
		}
		isCorrect = false;
	}
}