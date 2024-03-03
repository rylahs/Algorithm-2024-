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
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int n;
		cin >> n;

		int enter = 0;
		int dep = 0;
		while (n--)
		{
			int x, y, r;
			cin >> x >> y >> r;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r)
					dep++;
			
			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r)
					enter++;
		}

		cout << enter + dep << '\n';

	}


	return 0;
}