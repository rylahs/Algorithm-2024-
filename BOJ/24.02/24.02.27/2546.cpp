#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n, m;
		cin >> n >> m;

		vector<long long> nSumArr(n);

		long long nSum = 0, mSum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> nSumArr[i];
			nSum += nSumArr[i];
		}

		for (int i = 0; i < m; i++)
		{
			long long input;
			cin >> input;
			mSum += input;
		}

		int res = 0;
		for (int i = 0; i < n; i++)
		{
			if (nSumArr[i] * n < nSum &&
				nSumArr[i] * m > mSum)
				res++;
		}

		cout << res << "\n";


	}

	return 0;
}