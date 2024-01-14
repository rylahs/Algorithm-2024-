#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	list<char> li;

	string str;
	cin >> str;

	for (auto& e : str)
		li.push_back(e);

	auto cursor = li.end();

	int m;
	cin >> m;
	
	while (m--)
	{
		char cmd;
		cin >> cmd;
		if (cmd == 'L')
		{
			if (cursor == li.begin())
				continue;
			cursor--;
		}
		else if (cmd == 'D')
		{
			if (cursor == li.end())
				continue;
			cursor++;
		}
		else if (cmd == 'B')
		{
			if (li.empty() || cursor == li.begin())
				continue;
			cursor--;
			cursor = li.erase(cursor);
		}
		else if (cmd == 'P')
		{
			char ch;
			cin >> ch;
			
			li.insert(cursor, ch);
		}
		else{}
	}

	for (auto& e : li)
		cout << e;

	return 0;
}