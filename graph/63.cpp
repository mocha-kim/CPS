#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int> > info(n, vector<int>(n));
	for (int i = 0; i < m; i++)
	{
		int node1, node2, weight;
		cin >> node1 >> node2 >> weight;
		info[node1 - 1][node2 - 1] = weight;
	}
	for (vector<int> v : info)
	{
		for (int i = 0; i < n - 1; i++)
			cout << v[i] << " ";
		cout << v[n - 1] << "\n";
	}
}