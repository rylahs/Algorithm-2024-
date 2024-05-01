#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	for (int t = 0; t < testCase; t++)
	{
		int a, b;
		cin >> a >> b;

		int mx = (a * b) / 2;

		cout << mx << '\n';
	}

	return 0;
}