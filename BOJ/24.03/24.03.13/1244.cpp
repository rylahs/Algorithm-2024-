#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	v[0] = INT_MAX;
	int m;
	cin >> m;

	while (m--)
	{
		int gen, num;
		cin >> gen >> num;
		if (gen == 1)
		{
			for (int i = num; i <= n; i += num)
				v[i] ^= 1;
			
		}
		else
		{
			for (int i = 0; num + i < n + 1 && num - i > 0 && v[num + i] == v[num - i]; i++)
				v[num - i] = (v[num + i] ^= 1);
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << v[i] << ' ';
		if (i % 20 == 0)
			cout << '\n';
	}

	return 0;
}