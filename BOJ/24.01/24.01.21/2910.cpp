#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

bool compare(const pair<int, int>& p1, const pair<int, int>& p2)
{
	return p1.first > p2.first;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, c;
	cin >> n >> c;

	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		bool isInput = false;
		for (auto& e : v)
		{
			if (e.second == x)
			{
				isInput = true;
				e.first++;
				break;
			}
		}
		if (!isInput)
			v.push_back({ 1, x });
	}
	stable_sort(v.begin(), v.end(), compare);

	for (auto& e : v)
	{
		while (e.first--)
		{
			cout << e.second << " ";
		}
	}
	return 0;
}