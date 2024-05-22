#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k, w, m;
	cin >> k >> w >> m;

	int cnt = 0;

	while (k < w)
	{
		k += m;
		cnt++;
	}

	cout << cnt << '\n';

	return 0;
}