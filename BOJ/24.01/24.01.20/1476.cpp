#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int e, s, m;
	cin >> e >> s >> m;

	int my_year = 1;

	while (true)
	{
		if ((my_year - e) % 15 == 0 &&
			(my_year - s) % 28 == 0 &&
			(my_year - m) % 19 == 0)
		{
			cout << my_year << "\n";
			break;
		}

		my_year++;
	}

	return 0;
}