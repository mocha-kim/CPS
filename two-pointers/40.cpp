#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	int n, num;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int m;
	cin >> m;
	unordered_map<int, int> b;
	for (int i = 0; i < m; i++)
	{
		cin >> num;
		b[num]++;
	}

	priority_queue<int, vector<int>, greater<int> > pq;
	for (auto i : a)
		if (b[i])
			pq.push(i);

	string answer;
	while (pq.size())
	{
		answer.append(to_string(pq.top()) + " ");
		pq.pop();
	}
	answer.pop_back();
	cout << answer;
}