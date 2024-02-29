#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 3;

	while (n--)
	{
		string str;
		cin >> str;
		int res = 1;
		int mxRes = 1;
		for (int i = 0; i < str.length() - 1; i++)
		{
			if (str[i] == str[i + 1])
			{
				res++;

				if (res > mxRes)
					mxRes = res;

			}
			else
				res = 1;
		}

		cout << mxRes << '\n';
	}

	return 0;
}