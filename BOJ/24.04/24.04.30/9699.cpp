#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int t = 1; t <= n; t++)
	{
		int mx = -1;
		for (int i = 0; i < 5; i++)
		{
			int input;
			cin >> input;
			mx = max(input, mx);
		}

		cout << "Case #" << t << ": " << mx << '\n';
	}

	return 0;
}