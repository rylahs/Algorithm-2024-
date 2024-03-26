#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ',')
		{
			cnt++;
		}

		
	}

	cout << cnt + 1 << '\n';

	return 0;
}