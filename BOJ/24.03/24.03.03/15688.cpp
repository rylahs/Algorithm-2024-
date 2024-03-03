#include <bits/stdc++.h>
using namespace std;

vector<int> v(2000001, 0);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	while (n--)
	{
		int input;
		cin >> input;

		v[1000000 + input]++;
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != 0)
		{
			for (int j = 0; j < v[i]; j++)
				cout << i - 1000000 << '\n';
		}
	}

	return 0;
}