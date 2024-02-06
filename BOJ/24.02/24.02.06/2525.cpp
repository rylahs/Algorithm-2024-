#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int h, m, c;
	cin >> h >> m >> c;

	m += c;
	while (m > 59)
	{
		++h;
		m -= 60;
	}

	if (h > 23)
		h -= 24;

	cout << h << " " << m << "\n";

	return 0;
}