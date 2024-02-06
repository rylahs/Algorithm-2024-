#include <bits/stdc++.h>

using namespace std;

vector<bool> state(1000005, true);
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	state[0] = false;
	state[1] = false;

	int m, n;
	cin >> m >> n;

	for (int i = 2; i <= n; i++)
	{
		if (state[i] == false)
			continue;
		for (int j = 2 * i; j <= n; j += i)
			state[j] = 0;
	}

	for (int i = m; i <= n; i++)
	{
		if (state[i] != 0)
			cout << i << "\n";
	}

	return 0;
}