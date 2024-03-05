#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			continue;
		}

		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}

	cout << str << '\n';
	return 0;
}