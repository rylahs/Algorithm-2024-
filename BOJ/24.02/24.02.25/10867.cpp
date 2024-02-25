#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<int> st;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		st.insert(num);
	}

	for (auto& e : st)
		cout << e << ' ';

	return 0;
}