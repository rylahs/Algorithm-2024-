#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<pair<int, int>> v;
	for (int i = 0; i < 3; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x, y });
	}

	int resX = v[0].first;
	int resY = v[0].second;

	for (int i = 1; i < 3; i++)
	{
		resX ^= v[i].first;
		resY ^= v[i].second;
	}

	cout << resX << " " << resY << "\n";
	
	return 0;
}