#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	int maxMoney = INT_MIN;
	while (n--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int mxDice = 0;
		mxDice = max(a, b);
		mxDice = max(mxDice, c);

		int res = 0;

		if (a == b && b == c && c == a)
			res = 10000 + (a * 1000);
		else if (a == b || a == c)
			res = 1000 + a * 100;
		else if (b == c)
			res = 1000 + b * 100;
		else
			res = mxDice * 100;
		
		maxMoney = max(maxMoney, res);
	}

	cout << maxMoney << '\n';

	return 0;
}