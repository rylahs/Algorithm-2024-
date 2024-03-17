#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testcase = 0;
	while (true)
	{
		testcase++;

		int n0;
		cin >> n0;

		if (n0 == 0)
			break;

		int n1 = 3 * n0;
		int n2 = (n1 % 2 == 1) ? ((n1 + 1) / 2) : (n1 / 2);
		int n3 = 3 * n2;
		int n4 = n3 / 9;
		int res = (n1 % 2 == 1) ? (2 * n4 + 1) : (2 * n4);

		cout << testcase << ". " << ((n1 % 2 == 1) ? "odd " : "even ") << n4 << '\n';

	}

	return 0;
}