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
		double a; string str;
		cin >> a >> str;

		cout << fixed;
		cout.precision(4);

		double res = 0;
		if (str == "kg")
		{
			res = a * 2.2046;
			cout << res << " lb\n";
			continue;
		}

		if (str == "l")
		{
			res = a * 0.2642;
			cout << res << " g\n";
			continue;
		}

		if (str == "lb")
		{
			res = a * 0.4536;
			cout << res << " kg\n";
			continue;
		}

		if (str == "g")
		{
			res = a * 3.7854;
			cout << res << " l\n";
			continue;
		}

	}


	return 0;
}