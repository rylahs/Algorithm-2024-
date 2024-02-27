#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> sum(n + 1);
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		sum[i] = a + sum[i - 1];
	}

	int m;
	cin >> m;

	while (m--)
	{
		int a, b;
		cin >> a >> b;

		int res = sum[b] - sum[a - 1];

		cout << res << "\n";
	}


	return 0;
}