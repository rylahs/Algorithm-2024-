#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string look[] = { "ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO",
					"SPbSU", "ITMO", "ITMO", "ITMO", "ITMO",
					"ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU", "ITMO",
					"ITMO", "ITMO", "ITMO", "SPbSU", "ITMO",
					"ITMO", "ITMO", "ITMO", "SPbSU", "ITMO" };
	int y;
	cin >> y;

	cout << look[y - 1995] << '\n';

	return 0;
}