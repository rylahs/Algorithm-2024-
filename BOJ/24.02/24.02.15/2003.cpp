#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	int res = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			res += v[j];

			if (res == m)
			{
				cnt++;
				res = 0;
				break;
			}
		}
		if (res != 0)
			res = 0;
	}
	cout << cnt << "\n";
	return 0;
}