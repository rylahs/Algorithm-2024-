#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int dig;
	cin >> dig;

	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		int tmp = i;
		while (tmp > 0)
		{
			if (tmp % 10 == dig)
				res++;
			tmp /= 10;
		}
	}

	cout << res << "\n";

	return 0;
}