#include <iostream>

using namespace std;

double ctok(double �) // ����������� ������� ����
{ // � �������� ���� ��� � ������� ���� � ������� � ��������
	double k = � + 273.15;
	return k;
}

int main()
{
	double c = 0;
	for (;;) {
		cin >> c;
		if (c > -273.15) break;
		cout << "incorrect input!\n" << endl;
	}
	double k = ctok(c);
	cout << k << endl;
}