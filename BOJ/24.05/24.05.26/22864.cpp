#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c, m;
	cin >> a >> b >> c >> m;

	int init = 0;
	int work = 0;
	for (int h = 0; h < 24; h++)
	{
		if (init + a <= m)
		{
			init += a;
			work += b;
		}
		else
		{
			init -= c;
			if (init < 0)
				init = 0;
		}
	}

	cout << work << '\n';

	return 0;
}