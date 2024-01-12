#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> n(10, 0);

	int a, b, c;
	cin >> a >> b >> c;

	int res = a * b * c;

	while (res > 0)
	{
		n[res % 10]++;


		res /= 10;
	}

	for (auto& e : n)
		cout << e << "\n";

	return 0;
}