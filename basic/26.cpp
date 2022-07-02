#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> ability(n);
	vector<int> best(n, 1);
	for (int i = 0; i < n; i++)
	{
		cin >> ability[i];
		for (int j = 0; j < i; j++)
		{
			if (ability[j] >= ability[i])
				best[i]++;
		}
	}

	string answer;
	for (int i : best)
		answer.append(to_string(i) + " ");
	answer.pop_back();
	cout << answer;
}