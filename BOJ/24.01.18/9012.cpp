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
		stack<char> st;
		string str;
		cin >> str;

		bool isVPS = true;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(')
			{
				st.push(str[i]);
				continue;
			}

			if (str[i] == ')')
			{
				if (st.empty() || st.top() == ')')
				{
					isVPS = false;
					break;
				}
				if (st.top() == '(')
				{
					st.pop();
					continue;
				}
			}

		}
		if (isVPS == false || !st.empty())
			cout << "NO\n";
		else
			cout << "YES\n";


	}

	return 0;
}