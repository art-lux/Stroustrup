#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> names;
	vector<int> scores;
	int score;
	string name;
	do
	{
		cin >> name >> score;
		if (name == "NoName" || score == 0) break;
		auto isExist = find(names.begin(), names.end(), name);
		if (isExist != names.end())
		{
			cout << "Name: " << name << " is exists" << endl;
			continue;
		}
		names.push_back(name);
		scores.push_back(score);
	} while (true);

	string find_name;
	cout << "Enter name:";
	cin >> find_name;
	auto isExist = find(names.begin(), names.end(), find_name);
	if (isExist != names.end())
	{
		cout << scores[isExist - names.begin()] << endl;
	}
	else cout << "Name not found" << endl;

	cout << "Enter marks:";
	int mark;
	cin >> mark;
	auto exist = find(scores.begin(), scores.end(), mark);
	if (exist != scores.end())
	{
		for (; exist != scores.end(); exist = find(exist + 1, scores.end(), mark))
		{
			cout << names[exist - scores.begin()] << endl;
		}
	}
	else cout << "Scores not found" << endl;


	for (uint16_t i = 0; i < names.size(); ++i)
	{
		cout << "Name: " << names[i] << " - " << scores[i] << endl;
	}

	return 0;
}