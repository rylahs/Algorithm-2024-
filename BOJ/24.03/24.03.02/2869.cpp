#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, v;
	cin >> a >> b >> v;

	int cnt = 0;

	if (v <= a)
		cnt = 1;
	else
	{
		if ((v - a) % (a - b) == 0)
			cnt = (v - a) / (a - b) + 1;
		else
			cnt = (v - a) / (a - b) + 2;
	}
	cout << cnt << '\n';


	return 0;
}