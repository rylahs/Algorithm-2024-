#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, t;
	cin >> n >> t;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int sum = 0;
	int idx = 0;

	while (idx < v.size())
	{
		if (sum + v[idx] > t)
			break;

		sum += v[idx];
		idx++;
	}
	
	cout << idx << '\n';

	return 0;
}