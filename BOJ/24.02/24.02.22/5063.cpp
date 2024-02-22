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
		int r, e, c;
		cin >> r >> e >> c;

		int adv = r - (e - c);

		if (adv > 0)
			cout << "do not advertise\n";
		else if (adv == 0)
			cout << "does not matter\n";
		else
			cout << "advertise\n";

	}

	return 0;
}