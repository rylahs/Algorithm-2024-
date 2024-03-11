#include <bits/stdc++.h>
using namespace std;

short v[1000002];
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

		
		for (int i = 0; i < n; i++)
			cin >> v[i];

		long long tot = 0;
		short tmp = v[n - 1];

		for (int i = n - 2; i >= 0; i--)
		{
			if (tmp > v[i])
				tot += tmp - v[i];
			else
				tmp = v[i];
		}

		cout << tot << '\n';
	}

	return 0;
}