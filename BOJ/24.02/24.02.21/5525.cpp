#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	string s;
	cin >> n >> m >> s;

	int res = 0;

	for (int i = 1; i < s.length(); i++)
	{
		int cnt = 0;
		if (s[i - 1] == 'I')
		{
			while (s[i] == 'O' && s[i + 1] == 'I')
			{
				i += 2;
				cnt++;
				if (cnt == n)
				{
					cnt--;
					res++;
				}
			}
		}
	}
	cout << res << "\n";
	return 0;
}