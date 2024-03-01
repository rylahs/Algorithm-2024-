#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	map <string, set<string>> mp;
	while (true)
	{
		string str;
		cin >> str;

		if (str == "XXXXXX")
			break;

		string sortStr = str;
		sort(sortStr.begin(), sortStr.end());

		mp[sortStr].insert(str);
	}

	while (true)
	{
		string str;
		cin >> str;
		
		if (str == "XXXXXX")
			break;

		sort(str.begin(), str.end());

		if (mp[str].empty())
			cout << "NOT A VALID WORD\n";
		else
		{
			for (auto& e : mp[str])
				cout << e << "\n";
		}

		cout << "******\n";
	}

	return 0;
}