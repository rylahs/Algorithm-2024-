#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		int cond1 = (r1 - r2) * (r1 - r2);
		int cond2 = (r1 + r2) * (r1 + r2);


		if (d == 0)
		{
			if (cond1 == 0)
				cout << -1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (d == cond1 || d == cond2)
			cout << 1 << '\n';
		else if (cond1 < d && d < cond2)
			cout << 2 << '\n';
		else
			cout << 0 << '\n';

	}

	return 0;
}
