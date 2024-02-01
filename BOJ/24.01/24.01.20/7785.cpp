#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	unordered_set<string> st;
	while (n--)
	{
		string input;
		cin >> input;

		string cmd;
		cin >> cmd;

		if (cmd == "enter")
		{
			st.insert(input);
			continue;
		}
		else
			st.erase(input);
	}
	vector<string> v(st.begin(), st.end());
	sort(v.begin(), v.end(), greater<>());

	for (auto& e : v)
		cout << e << "\n";


	return 0;
}