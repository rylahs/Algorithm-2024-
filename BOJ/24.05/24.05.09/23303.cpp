#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		string tmp = str.substr(i, 2);
		if (tmp == "D2" || tmp == "d2")
		{
			cout << "D2\n";
			return 0;
		}
	}

	cout << "unrated\n";

	return 0;
}