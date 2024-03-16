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
		int a, b;
		cin >> a >> b;

		int cnt = 0;
		while (a > 0)
		{
			cnt += a & 1;
			a >>= 1;
		}

		if (cnt % 2 == b)
			cout << "Valid\n";
		else
			cout << "Corrupt\n";
	}


	return 0;
}
