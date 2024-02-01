#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;
	stack<int> st;

	while (k--)
	{
		int input;
		cin >> input;

		if (input == 0)
		{
			if (st.empty())
				continue;
			st.pop();
		}
		else
			st.push(input);
	}
	int sum = 0;
	while (!st.empty())
	{
		sum += st.top();
		st.pop();
	}

	cout << sum << "\n";
	return 0;
}