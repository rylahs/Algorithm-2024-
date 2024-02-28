#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	vector<int> v(3);

	v[0] = t / 300;
	v[1] = t % 300 / 60;
	v[2] = t % 300 % 60 / 10;

	if (t % 300 % 60 % 10 != 0)
		cout << -1 << "\n";
	else
	{
		for (auto& e : v)
			cout << e << ' ';
	}
	return 0;
}