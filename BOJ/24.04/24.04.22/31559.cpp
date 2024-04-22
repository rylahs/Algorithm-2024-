#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x;
	cin >> n >> x;

	vector<int> v1(n + 1, 0);
	vector<int> v2(n + 1, 0);
	vector<int> v3(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> v1[i] >> v2[i];

	int val = 1, dir = 1;

	for (int i = 0; i < 1 << 20; i++)
	{
		if (!v1[x])
		{
			val += v2[x];
			dir ^= 1;
		}
		
		if (v1[x] && v2[x] <= val)
			v3[x] = 1;

		x += dir ? val : -val;

		if (x < 1 || x > n)
			break;
	}

	int res = 0;
	for (int i = 1; i <= n; i++)
		if (v3[i])
			res++;

	cout << res << '\n';

	return 0;
}