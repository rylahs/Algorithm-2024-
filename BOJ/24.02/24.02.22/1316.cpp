#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int res = 0;
	while (n--)
	{
		vector<int> alpha(26, 0);

		bool isGroup = true;

		string str;
		cin >> str;

		for (int i = 0; i < str.length(); i++)
		{
			if (i + 1 < str.length() && alpha[str[i] - 'a'] == 0)
			{
				if (str[i] == str[i + 1])
					continue;
				alpha[str[i] - 'a']++;
				continue;
			}

			if (alpha[str[i] - 'a'] != 0)
			{
				isGroup = false;
				break;
			}
		}

		if (isGroup)
			res++;
	}

	cout << res << "\n";

	return 0;
}