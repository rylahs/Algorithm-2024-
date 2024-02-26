#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int m, n, x, y;
		cin >> m >> n >> x >> y;
		
		int res = -1;
		for (int i = x; i <= lcm(m, n); i += m)
		{
			int ny = i % n;

			if (ny == 0)
				ny = n;
			if (ny == y)
			{
				res = i;
				break;
			}
		}

		cout << res << "\n";
		
	}

	return 0;
}