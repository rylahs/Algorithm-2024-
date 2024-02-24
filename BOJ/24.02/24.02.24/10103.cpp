#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int scC = 100, scS = 100;
	
	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int a, b;
		cin >> a >> b;

		if (a == b)
			continue;

		if (a > b)
			scS -= a;
		else
			scC -= b;
	}

	cout << scC << '\n' << scS << '\n';

	return 0;
}