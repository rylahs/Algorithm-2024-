#include <bits/stdc++.h>
using namespace std;

int _dist(const pair<int, int>& a, const pair<int, int>& b)
{
	return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		vector<pair<int, int>> v;
		bool flag = 0;

		for (int i = 0; i < 4; i++)
		{
			int x, y;
			cin >> x >> y;
			v.push_back({ x, y });
		}

		sort(v.begin(), v.end());
		int a = _dist(v[0], v[1]);
		int b = _dist(v[0], v[2]);
		int c = _dist(v[3], v[1]);
		int d = _dist(v[3], v[2]);
		int e = _dist(v[0], v[3]);
		int f = _dist(v[1], v[2]);

		if (a == b && b == c && c == d && e == f)
			flag = 1;
		if (flag)
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}


	return 0;
}