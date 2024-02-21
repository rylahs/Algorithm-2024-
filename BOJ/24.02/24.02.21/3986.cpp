#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	

	int res = 0;
	while (n--)
	{
		string str;
		cin >> str;
		stack<char> s;
		
		for (int i = 0; i < str.length(); i++)
		{
			if (s.empty())
				s.push(str[i]);
			else
			{
				if (s.top() != str[i])
					s.push(str[i]);
				else
					s.pop();
			}
		}

		if (s.empty())
			res++;
	}

	cout << res << '\n';

	return 0;
}