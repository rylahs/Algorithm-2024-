#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		string str;
		getline(cin, str);
		if (str == ".")
			return 0;
		
		bool isBalanced = true;
		stack<char> st;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
			{
				st.push(str[i]);
				continue;
			}

			else if (str[i] == ')')
			{
				if (st.empty() || st.top() != '(')
				{
					isBalanced = false;
					break;
				}
				st.pop();
			}
			
			else if (str[i] == ']')
			{
				if (st.empty() || st.top() != '[')
				{
					isBalanced = false;
					break;
				}
				st.pop();
			}

		}
		if (!st.empty())
			isBalanced = false;

		if (isBalanced == false)
			cout << "no\n";
		else
			cout << "yes\n";
	}


	return 0;
}