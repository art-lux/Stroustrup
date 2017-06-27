#include <iostream>
#include <string>

using namespace std;

void main()
{
	string name_addressee;
	string friend_name;
	char sex = 0;
	int addressee_age;
	cout << "Enter addressee name and after friend name:\n";
	cin >> name_addressee >> friend_name;

	cout << "Enter age of addressee:\n";
	cin >> addressee_age;
	if (addressee_age <= 0 || addressee_age >= 110)
	{
		cout << "Wrong age!\n";
		return;
	}
	cout << "Enter sex of friend ('m' or 'f'):\n";
	cin >> sex;


	cout << "Dear " << name_addressee << ", how are you?\n";
	cout << "I'm fine. I miss you.\n";
	cout << "When your was meeting " << friend_name << " last time?\n";
	switch (sex)
	{
	case 'm':
		cout << "If you will see " << friend_name << " , please tell him to call me.\n";
		break;
	case 'f':
		cout << "If you will see " << friend_name << " , please tell her to call me.\n";
		break;
	default:
		break;
	}

	if (addressee_age < 12)
	{
		cout << "You will turn " << addressee_age + 1 << " on the next year.\n";
	}
	else if (addressee_age == 17)
	{
		cout << "You'll can vote on the next year.\n";
	}
	else if (addressee_age > 70)
	{
		cout << "I hope you don't miss your retirement.\n";
	}
	cout << "Sincerely yours\n\nArtem.\n";
}