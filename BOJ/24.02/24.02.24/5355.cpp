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
		double num;
		cin >> num;
		string str;
		getline(cin, str);

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '@')
				num *= 3;
			if (str[i] == '%')
				num += 5;
			if (str[i] == '#')
				num -= 7;
		}
		cout << fixed;
		cout.precision(2);

		cout << num << "\n";
	}

	return 0;
}