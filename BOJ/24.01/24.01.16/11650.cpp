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

	vector<pair<int, int>> point;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		point.push_back(make_pair(x, y));
	}

	sort(point.begin(), point.end());

	for (auto& e : point)
	{
		cout << e.X << " " << e.Y << "\n";
	}

	return 0;
}