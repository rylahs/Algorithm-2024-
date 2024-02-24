#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k, n, m;
	cin >> k >> n >> m;

	int needed = k * n;
	int res = 0;
	if (needed <= m)
		res = 0;
	else
	{
		res = needed - m;
	}

	cout << res << "\n";

	return 0;
}