#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		int k;
		cin >> k;

		if (k == 0)
			break;

		vector<int> v(k);
		vector<bool> use(k, false);


		for (int i = 0; i < 6; i++)
			use[i] = true;

		for (int i = 0; i < k; i++)
			cin >> v[i];

		do
		{
			for (int i = 0; i < k; i++)
			{
				if (use[i])
					cout << v[i] << ' ';
			}
			cout << '\n';
		} while (prev_permutation(use.begin(), use.end()));
		cout << '\n';

	}

	return 0;
}