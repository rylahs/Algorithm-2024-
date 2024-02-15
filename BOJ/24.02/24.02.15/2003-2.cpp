#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	int res = 0;
	int cnt = 0;

	int left = 0, right = 0;
	
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int sum = v[0];

	while (right < n)
	{
		if (sum < m)
		{
			right++;
			if (right < n)
				sum += v[right];
		}

		else if (sum > m)
		{
			sum -= v[left++];
		}

		else if (sum == m)
		{
			sum -= v[left];
			left++;
			right++;

			if (right < n)
				sum += v[right];
			cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}