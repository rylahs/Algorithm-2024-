#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;

	for (int i = 1; i <= k; i++)
	{
		int n;
		cin >> n;
		vector<int> v(n);

		int mi = 103, mx = -1;
		for (int j = 0; j < n; j++)
		{
			cin >> v[j];
			mi = min(mi, v[j]);
			mx = max(mx, v[j]);
		}
		
		sort(v.begin(), v.end(), greater<>());

		int mxGap = -1;

		for (int j = 0; j < n - 1; j++)
		{
			int gap = v[j] - v[j + 1];
			mxGap = max(mxGap, gap);
		}

		cout << "Class " << i << "\n";
		cout << "Max " << mx << ", Min " << mi << ", Largest gap " << mxGap << "\n";
	}

	return 0;
}