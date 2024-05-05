#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	unordered_map<string, int> ump;

	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;

		if (ump.find(input) != ump.end())
		{
			ump[input]++;
			continue;
		}

		ump[input]++;
	}

	int res = INT_MIN;
	string str = "";
	for (auto& e : ump)
	{
		if (e.second == res && str != e.first)
		{
			if (e.first > str)
				str = e.first;
		}

		if (e.second > res)
		{
			res = e.second;
			str = e.first;
		}
		
	}

	cout << str << " " << res << '\n';

	return 0;
}