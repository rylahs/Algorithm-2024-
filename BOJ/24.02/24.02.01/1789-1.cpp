#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin >> n;

	int res = 1;
	for (long long i = 0; i <= n; i++)
	{
		if ((i * (i + 1)) / 2 > n)
		{
			res = --i;
			break;
		}
	}

	cout << res << "\n";


	return 0;
}