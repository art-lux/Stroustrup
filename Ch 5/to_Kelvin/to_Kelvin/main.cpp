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
	cin >> c;
	double k = ctok(c);
	cout << k << endl;
}