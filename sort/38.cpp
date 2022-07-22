#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int num, count, pos;
	vector<int> sorted(n);
	cin >> num;
	sorted[num] = 1;
	for (int i = 1; i < n; i++)
	{
		cin >> num;
		count = 0;
		pos = 0;
		for (int j = 0; j < n; j++)
		{
			if (count == num && sorted[pos] == 0)
				break;
			if (sorted[j] == 0)
				count++;
			pos++;
		}
		sorted[pos] = i + 1;
	}
	string answer;
	for (int i : sorted)
		answer.append(to_string(i) + " ");
	answer.pop_back();
	cout << answer;
}
