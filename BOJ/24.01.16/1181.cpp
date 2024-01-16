#include <bits/stdc++.h>
using namespace std;

struct Compare {
	bool operator()(const string& a, const string& b) const {
		if (a.length() == b.length())
			return a < b;
		return a.length() < b.length();
	}
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<string, Compare> st;

	while (n--)
	{
		string input;
		cin >> input;

		st.insert(input);
	}

	for (auto& e : st)
		cout << e << "\n";
	return 0;
}