#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		string input;
		cin >> input;

		int res = 0;
		int continusCount = 0;
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == 'O')
			{
				res += 1 + continusCount++;
				continue;
			}

			continusCount = 0;
		}

		cout << res << "\n";
	}

	return 0;
}