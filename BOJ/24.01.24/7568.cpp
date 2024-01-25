#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, int>> v;
	vector<int> res;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x, y });
	}

	for (int i = 0; i < n; i++)
	{
		int rank = 1;
		
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (v[i].X < v[j].X && v[i].Y < v[j].Y)
			{
				rank++;
				continue;
			}

		}
		res.push_back(rank);
	}

	for (auto& e : res)
		cout << e << " ";

	return 0;
}