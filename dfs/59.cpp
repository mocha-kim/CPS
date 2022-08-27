#include <iostream>
#include <vector>
#include <string>

using namespace std;

void dfs(int n, int cur, vector<bool> &is_included)
{
	if (cur == n)
	{
		string tmp = "";
		for (int i = 0; i < n; i++)
			if (is_included[i])
				tmp.append(to_string(i + 1) + " ");
		if (tmp != "")
		{
			tmp.pop_back();
			cout << tmp << "\n";
		}
		return;
	}
	is_included[cur] = true;
	dfs(n, cur + 1, is_included);
	is_included[cur] = false;
	dfs(n, cur + 1, is_included);
}

int main()
{
	int n;
	cin >> n;

	vector<bool> is_included(n, false);

	dfs(n, 0, is_included);
}