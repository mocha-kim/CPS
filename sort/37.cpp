#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int s, n;
	cin >> s >> n;

	vector<int> cache(s);
	int task, tmp;
	bool found;
	for (int i = 0; i < n; i++)
	{
		cin >> task;
		found = false;
		for (auto iter = cache.begin(); iter != cache.end(); iter++)
		{
			if (*iter == task)
			{
				found = true;
				cache.erase(iter);
				cache.insert(cache.begin(), task);
				break;
			}
		}
		if (!found)
		{
			cache.insert(cache.begin(), task);
			cache.pop_back();
		}
	}
	string answer;
	for (auto i : cache)
		answer.append(to_string(i)+ " ");
	answer.pop_back();
	cout << answer;
}