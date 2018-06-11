#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	//double min_distance = numeric_limits<double>::max(), max_distance = numeric_limits<double>::min();
	vector<double> distances;
	for (double tmp; cin >> tmp;)
	{
		distances.push_back(tmp);
	}

	double sum = 0;
	for (auto el : distances)
	{
		sum += el;
	}
	cout << "All distance: " << sum << endl;

	cout << "Average distance: " << sum / distances.size() << endl;

	sort(distances.begin(), distances.end());

	cout << "Min distance: " << distances.front() << endl;
	cout << "Max distance: " << distances.back() << endl;

	return 0;
}