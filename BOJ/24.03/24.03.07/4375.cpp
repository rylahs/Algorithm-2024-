#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;

	int k = 0;
	while (cin >> n)
	{
		int res = 1;
		k = 1;

		while (true)
		{
			if (res % n == 0)
				break;

			else
			{
				k++;
				res = res * 10 + 1;
				res %= n;
			}
		}

		cout << k << '\n';
	}

	return 0;
}