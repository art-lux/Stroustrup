#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	const vector<string> dislike_words{ "Broccoli" };
	vector<string> words;
	for (string temp; cin >> temp;)
	{
		if(dislike_words.cend() != find(dislike_words.cbegin(), dislike_words.cend(), temp))
		{
			continue;
		}
		words.push_back(temp);
	}

	cout << "Vector size: " << words.size() << endl;

	for (auto el : words)
	{
		cout << el << endl;
	}
	return 0;
}