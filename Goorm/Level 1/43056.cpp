#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(4, 0);

	int winners = 0;

	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		v[input]++;
	}

	if (v[1] == 0 || v[2] == 0 || v[3] == 0)
	{
		if (v[1] > 0 && v[3] > 0)
			winners += v[1];
		if (v[2] > 0 && v[1] > 0)
			winners += v[2];
		if (v[3] > 0 && v[2] > 0)
			winners += v[3];
	}
	else
	{
		winners = 0;
	}

	cout << winners << "\n";


	return 0;
}