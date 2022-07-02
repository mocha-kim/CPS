#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> grades(n);
	vector<int> places(n, 1);
	for (int i = 0; i < n; i++)
		cin >> grades[i];

	for (int i = 0; i < n; i++)
	{
		cin >> grades[i];
		for (int j = 0; j < n; j++)
		{
			if (grades[j] > grades[i])
				places[i]++;
		}
	}

	string answer;
	for (int i : places)
		answer.append(to_string(i) + " ");
	answer.pop_back();
	cout << answer;
}