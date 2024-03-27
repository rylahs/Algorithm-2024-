#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string str;
	cin >> n >> str;

	int cnt = 0;
	bool isO = false;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'o')
		{
			cnt++;
			if (cnt >= 3)
			{
				isO = true;
				break;
			}
		}
		else
			cnt = 0;
	}

	if (isO)
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}