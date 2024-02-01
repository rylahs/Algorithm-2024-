#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m;
	cin >> m;
	set<int> st;
	while (m--)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "add")
		{
			int x;
			cin >> x;
			st.insert(x);
		}

		else if (cmd == "remove")
		{
			int x;
			cin >> x;
			if (st.find(x) != st.end())
				st.erase(x);
		}

		else if (cmd == "check")
		{
			int x;
			cin >> x;
			if (st.find(x) != st.end())
				cout << 1 << "\n";

			else
				cout << 0 << "\n";
		}
		else if (cmd == "toggle")
		{
			int x;
			cin >> x;
			if (st.find(x) != st.end())
				st.erase(x);

			else
				st.insert(x);
		}
		else if (cmd == "all")
		{
			for (int i = 1; i < 21; i++)
				st.insert(i);

		}
		else
			st.clear();
	}

	return 0;
}
