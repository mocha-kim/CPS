#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	// int num, count, pos;
	// vector<int> original(n);
	// cin >> num;
	// original[num] = 1;
	// for (int i = 1; i < n; i++)
	// {
	// 	cin >> num;
	// 	count = 0;
	// 	pos = 0;
	// 	for (int j = 0; j < n; j++)
	// 	{
	// 		if (count == num && original[pos] == 0)
	// 			break;
	// 		if (original[j] == 0)
	// 			count++;
	// 		pos++;
	// 	}
	// 	original[pos] = i + 1;
	// }

	vector<int> inversion(n);
	for (int i = 0; i < n; i++)
		cin >> inversion[i];

	vector<int> original;
	for (int i = n - 1; i >= 0; i--)
	{
		auto pos = original.begin() + inversion[i];
		original.insert(pos, i + 1);
	}

	string answer;
	for (int i : original)
		answer.append(to_string(i) + " ");
	answer.pop_back();
	cout << answer;
}
