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
		int n, m;
		cin >> n >> m;

		if (n < 12 || m < 4)
		{
			cout << -1 << '\n';
			continue;
		}
		int res = 11 * m + 4;
		cout << res << '\n';
		

	}


	return 0;
}