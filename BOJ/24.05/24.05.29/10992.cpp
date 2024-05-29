#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";

		for (int k = 0; k < 2 * i + 1; k++)
		{
			if (i == n - 1)
				cout << "*";
			else
			{
				if (k == 0 || k == 2 * i)
					cout << "*";
				else
					cout << " ";
			}
		}
		cout << '\n';
	}

	return 0;
}