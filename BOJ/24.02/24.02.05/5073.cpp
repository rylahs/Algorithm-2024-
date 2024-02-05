#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		vector<int> v(3);
		for (int i = 0; i < 3; i++)
			cin >> v[i];

		if (v[0] == 0 && v[1] == 0 && v[2] == 0)
			break;

		sort(v.begin(), v.end());

		if (v[0] + v[1] <= v[2])
		{
			cout << "Invalid\n";
			continue;
		}

		if (v[0] != v[1] && v[1] != v[2] && v[0] != v[2])
		{
			cout << "Scalene\n";
			continue;
		}

		if (v[0] == v[2])
		{
			cout << "Equilateral\n";
			continue;
		}

		if (v[0] == v[1] || v[1] == v[2])
		{
			cout << "Isosceles\n";
			continue;
		}


	}


	return 0;
}