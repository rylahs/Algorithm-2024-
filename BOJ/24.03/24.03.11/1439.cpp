#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int toZero = 0;
	int toOne = 0;

	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == '1' && s[i - 1] == '0')
			toZero++;
		if (s[i] == '0' && s[i - 1] == '1')
			toOne++;
	}

	cout << max(toZero, toOne) << '\n';

	return 0;
}