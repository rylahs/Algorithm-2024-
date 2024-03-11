#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int res = 0;

	while (a < b)
	{
		if (b % 10 == 1)
		{
			b /= 10;
			res++;
		}
		else if (b % 2 == 0)
		{
			b /= 2;
			res++;
		}
		else
		{
			b = 0;
			break;
		}

	}

	if (a == b)
		cout << res + 1 << '\n';
	else
		cout << -1 << '\n';


	return 0;
}