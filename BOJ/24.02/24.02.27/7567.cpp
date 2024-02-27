#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int res = 10;
	
	for (int i = 1; i < str.length(); i++)
	{
		if (str[i] == str[i - 1])
			res += 5;
		else
			res += 10;
	}

	cout << res << '\n';

	return 0;
}