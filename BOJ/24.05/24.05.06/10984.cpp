#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	cout << fixed;
	cout.precision(1);
	while (testCase--)
	{
		int n;
		cin >> n;

		double sum = 0;
		double res = 0.0;
		for (int i = 0; i < n; i++)
		{
			int subject; double grade;
			cin >> subject >> grade;
			sum += subject;
			res += (double)subject * grade;
		}

		res /= sum;
		
		cout << (int)sum << ' ' << res << '\n';
	}

	return 0;
}