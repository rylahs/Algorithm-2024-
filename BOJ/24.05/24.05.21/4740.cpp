#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str = "";
	
	while (true)
	{
		if (!getline(cin, str) || str == "***")
			return 0;

		reverse(str.begin(), str.end());
		cout << str << '\n';

	}

	return 0;
}