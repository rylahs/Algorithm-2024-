#include <bits/stdc++.h>
using namespace std;


bool compare(const string& a, const string& b) 
{
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<string> st;

	while (n--)
	{
		string input;
		cin >> input;

		st.push_back(input);
	}

	sort(st.begin(), st.end(), compare);
	st.erase(unique(st.begin(), st.end()), st.end());

	for (auto& e : st)
		cout << e << "\n";
	return 0;
}