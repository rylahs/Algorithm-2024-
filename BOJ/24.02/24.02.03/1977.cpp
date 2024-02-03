#include <bits/stdc++.h>
using namespace std;

int powData[102];

void init() 
{
	for (int i = 0; i < 101; i++)
	{
		powData[i] = i * i;
	}

}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	init();
	
	int m, n;
	cin >> m >> n;

	m = (int)ceil(sqrt(m));
	n = (int)floor(sqrt(n));

	if (m > n)
		cout << -1 << "\n";
	else
	{
		int res = 0;
		int minValue = m * m;
		for (int i = m; i <= n; i++)
		{
			res += i * i;
		}

		cout << res << "\n";
		cout << minValue << "\n";
	}

	return 0;
}