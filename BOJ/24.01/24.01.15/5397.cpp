#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		list<char> li;
		auto cursor = li.begin();

		string str;
		cin >> str;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '<')
			{
				if (cursor != li.begin())
					cursor--;
			}

			else if (str[i] == '>')
			{
				if (cursor != li.end())
					cursor++;
			}
			
			else if (str[i] == '-')
			{
				if (cursor != li.begin())
					cursor = li.erase(--cursor);
			}
			else
			{
				li.insert(cursor, str[i]);
			}
		}

		for (auto& e : li)
			cout << e;
		cout << "\n";
	}

	return 0;
}