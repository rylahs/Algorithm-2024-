#include <bits/stdc++.h>
using namespace std;

long long sol[1000002];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	sol[1] = 1;

	for (int i = 2; i < 1000001; i++)
	{
		for (int j = 1; j * i < 1000001; j++)
			sol[i * j] += i;
		sol[i] += (sol[i - 1] + 1);
	}


	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n;
		cin >> n;

		cout << sol[n] << '\n';
	}

	return 0;
}