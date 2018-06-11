#include <iostream>

using namespace std;

int main()
{
	char input;
	int attempt_quantity = 1;
	int min_bound = 0, max_bound = 100, current = -1;
	cout << "Pick a number from one to hundred and remember it!" << endl;
	[&] {
		for (;; ++attempt_quantity)
		{

			current = min_bound + ((max_bound - min_bound) % 2 == 0 ? (max_bound - min_bound) / 2 : (max_bound - min_bound) / 2 + 1);

			cout << "Is your number EQUAL (y or n): " << current << endl;
			cin >> input;

			if (input == 'y')
			{
				cout << "Your number is: " << current << endl;
				cout << "Attempts: " << attempt_quantity << endl;
				return;
			}
			else if (input == 'n')
			{
				cout << "Is your number LESS then (y or n): " << current << endl;
				cin >> input;
				switch (input)
				{
				case 'y':
				{
					max_bound = current;
					if (max_bound - min_bound == 1)
					{
						cout << "Your number is: " << current - 1 << endl;
						cout << "Attempts: " << attempt_quantity << endl;
						return;
					}
					break;
				}
				case 'n':
				{
					min_bound = current;
					if (max_bound - min_bound == 1)
					{
						cout << "Your number is: " << current + 1 << endl;
						cout << "Attempts: " << attempt_quantity << endl;
						return;
					}
					break;
				}
				default:
					cout << "Invalid enter!" << endl;
					break;
				}
				
			}
			else
			{
				cout << "Invalid enter!" << endl;
			}
		}
	}();
	return 0;
}