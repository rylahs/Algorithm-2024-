#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, k, x;
	cin >> a >> b >> k >> x;

	int res = 0;
	for (int i = k - x; i < k + x + 1; i++)
	{
		if (i < a || i > b)
			continue;
		res++;
	}

	if (res == 0)
		cout << "IMPOSSIBLE\n";
	else
		cout << res << '\n';

	return 0;
}