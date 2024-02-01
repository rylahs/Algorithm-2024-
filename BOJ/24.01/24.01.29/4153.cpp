#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		vector<int> v(3, 0);
		for (int i = 0; i < 3; i++)
			cin >> v[i];

		if (v[0] == 0 && v[1] == 0 && v[2] == 0)
			break;

		sort(v.begin(), v.end());
		bool isTriangle = true;
		if (v[0] * v[0] + v[1] * v[1] != v[2] * v[2])
			isTriangle = false;

		if (isTriangle)
			cout << "right\n";
		else
			cout << "wrong\n";
		

	}

	return 0;
}