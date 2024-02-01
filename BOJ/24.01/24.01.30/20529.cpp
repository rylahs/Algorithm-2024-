#include <bits/stdc++.h>
using namespace std;
int getDistance(const string& a, const string& b, const string& c)
{
	int res = 0;
	for (int i = 0; i < a.length(); i++)
	{
		res += (a[i] != b[i]) + (b[i] != c[i]) + (c[i] != a[i]);
	}

	return res;
}

int Solve(int N, vector<string>& v)
{
	int ans = INT_MAX;
	if (N > 32)
	{
		ans = 0;
		return ans;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				continue;
			for (int k = 0; k < N; k++)
			{
				if (i == k || j == k)
					continue;
				ans = min(ans, getDistance(v[i], v[j], v[k]));
			}
		}
	}
	return ans;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n;
		cin >> n;

		if (n > 32)
		{
			string str;
			for (int i = 0; i < n; i++)
				cin >> str;

			cout << 0 << "\n";
			continue;
		}
		vector<string> vStr(n);
		for (int i = 0; i < n; i++)
			cin >> vStr[i];
		
		int ans = Solve(n, vStr);
		cout << ans << "\n";
	}

	return 0;
}