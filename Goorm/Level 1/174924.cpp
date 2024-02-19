#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	int maxScore = INT_MIN;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	vector<int> mx(n);
	mx[0] = v[0];
	for (int i = 1; i < n; i++)
	{
		if (v[i] - v[i - 1] == 1)
		{
			mx[i] = max(mx[i - 1] + v[i], v[i]);
		}
		else
		{
			mx[i] = v[i];
		}
	}

	int res = *max_element(mx.begin(), mx.end());

	cout << res << "\n";

	return 0;
}