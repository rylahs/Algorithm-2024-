#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	bool isAvailable = true;

	int lIdx = 0;

	while (lIdx < static_cast<int>(str.length()))
	{
		if (str[lIdx] == 'p')
		{
			if (str[lIdx + 1] == 'i')
			{
				lIdx += 2;
				continue;
			}
			isAvailable = false;
		}

		else if (str[lIdx] == 'k')
		{
			if (str[lIdx + 1] == 'a')
			{
				lIdx += 2;
				continue;
			}
			isAvailable = false;
		}

		else if (str[lIdx] == 'c')
		{
			if (str[lIdx + 1] == 'h' && str[lIdx + 2] == 'u')
			{
				lIdx += 3;
				continue;
			}
			isAvailable = false;
		}

		else
			isAvailable = false;

		if (!isAvailable)
			break;
	}

	if (!isAvailable)
		cout << "NO\n";
	else
		cout << "YES\n";


	return 0;
}