#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	

	while (true)
	{
		int testCase;
		cin >> testCase;

		if (testCase == -1)
			break;

		vector<int> v;
		for (int i = 1; i <= testCase / 2; i++)
		{
			if (testCase % i == 0)
				v.push_back(i);
		}

		int sum = accumulate(v.begin(), v.end(), 0);

		if (sum == testCase)
		{
			cout << testCase << " = ";
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i];
				if (i != v.size() - 1)
				{
					cout << " + ";
				}
			}
			cout << "\n";
		}
		else
		{
			cout << testCase << " is NOT perfect.\n";
		}

	}

	return 0;
}