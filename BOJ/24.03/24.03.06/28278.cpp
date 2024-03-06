#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	stack<int> st;
	while (n--)
	{
		int cmd;
		cin >> cmd;

		if (cmd == 1)
		{
			int input;
			cin >> input;
			st.push(input);
			continue;
		}

		if (cmd == 2)
		{
			if (st.empty())
			{
				cout << -1 << '\n';
				continue;
			}
			
			cout << st.top() << '\n';
			st.pop();
			continue;
		}

		if (cmd == 3)
		{
			cout << st.size() << '\n';
			continue;
		}

		if (cmd == 4)
		{
			if (st.empty())
			{
				cout << 1 << '\n';
				continue;
			}
			cout << 0 << '\n';
			continue;
		}

		if (cmd == 5)
		{
			if (st.empty())
			{
				cout << -1 << '\n';
				continue;
			}
			cout << st.top() << '\n';
			continue;
		}
	}

	return 0;
}