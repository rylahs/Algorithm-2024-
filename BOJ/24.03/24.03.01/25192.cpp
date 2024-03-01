#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int res = 0;
	set<string> st;
	while (n--)
	{
		string str;
		cin >> str;

		if (str == "ENTER")
		{
			res += st.size();
			st.clear();
			continue;
		}

		st.insert(str);
	}
	if (!st.empty())
		res += st.size();

	cout << res << '\n';
	return 0;
}