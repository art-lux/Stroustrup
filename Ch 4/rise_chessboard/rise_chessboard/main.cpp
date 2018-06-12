#include <iostream>

using namespace std;

int main()
{
	unsigned long long chess_board [8][8];
	unsigned long long sum = 0;
	unsigned long long last_quantity = 1;
	unsigned int square_quantity = 0;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			++square_quantity;
			chess_board[i][j] = last_quantity;
			sum += last_quantity;
			cout << "[" << i << "]" << "[" << j << "]" << " - " << chess_board[i][j] << endl;
			last_quantity *= 2;

			//if (sum > 1000000000)
			//{
			//	cout << "sqare quantity = " << square_quantity << endl;
			//	return 0;
			//}
		}
	}
	cout << "sqare quantity = " << square_quantity << endl;
	return 0;
}