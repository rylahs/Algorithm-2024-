#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	int minSum = INT_MIN;
	bool isComplete = false;
	for (int i = 0; i < n; ++i)
	{
		if (isComplete)
			break;
		for (int j = 0; j < n; ++j)
		{
			if (isComplete)
				break;
			if (i == j)
				continue;
			for (int k = 0; k < n; ++k)
			{
				if (i == k || j == k)
					continue;
				int sum = v[i] + v[j] + v[k];

				if (sum == m)
				{
					minSum = sum;
					isComplete = true;
					break;
				}
				if (minSum < sum && sum <= m)
					minSum = sum;


			}

		}

	}

	cout << minSum << "\n";



	return 0;
}