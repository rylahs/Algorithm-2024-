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
		vector<int> logs(n);
		for (int i = 0; i < n; i++)
			cin >> logs[i];

		sort(logs.begin(), logs.end());

		int maxDiff = 0;
		for (int i = 2; i < logs.size(); i++)
			maxDiff = max(maxDiff, abs(logs[i] - logs[i - 2]));

		if (n > 1) 
			maxDiff = max(maxDiff, logs[1] - logs[0]);
		
		if (n > 2) 
			maxDiff = max(maxDiff, logs[n - 1] - logs[n - 2]);
		
		cout << maxDiff << '\n';
	}

	return 0;
}