#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int l = str.length();
	int cnt = 0;
	for (int i = 0; i < l; i++)
	{
		if (str[i] == 'Y')
		{
			for (int j = i; j < l; j += i + 1)
			{
				if (str[j] == 'Y')
					str[j] = 'N';
				else
					str[j] = 'Y';
			}
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}