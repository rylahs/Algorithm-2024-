#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int res = 0;

	while (n--)
	{
		int a, b;
		cin >> a >> b;

		res += b % a;
	}

	cout << res << '\n';

	return 0;
}