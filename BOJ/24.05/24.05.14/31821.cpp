#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n + 1, 0);
	for (int i = 1; i <= n; i++)
		cin >> v[i];

	int m;
	cin >> m;

	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		int select;
		cin >> select;

		sum += v[select];
	}

	cout << sum << '\n';

	return 0;
}