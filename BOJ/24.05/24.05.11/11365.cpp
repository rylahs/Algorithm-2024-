#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;

	while (true)
	{
		getline(cin, str);

		if (str == "END")
			break;

		reverse(str.begin(), str.end());

		cout << str << '\n';
	}

	return 0;
}