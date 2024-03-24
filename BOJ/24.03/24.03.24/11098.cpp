#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int mxScore = INT_MIN;
		string res = "";
		for (int i = 0; i < n; i++)
		{
			int k;
			string st;
			cin >> k >> st;
			if (k <= mxScore)
				continue;

			mxScore = k;
			res = st;
		}

		cout << res << '\n';
	}

	return 0;
}