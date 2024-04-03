#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	while (n--)
	{
		string str;
		cin >> str;

		int cnt = 0;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
				cnt++;
		}
		cout << str << '\n';
		if (cnt > str.length() / 2)
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}

	return 0;
}