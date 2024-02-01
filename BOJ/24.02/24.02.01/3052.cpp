#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	set<int> st;
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		st.insert(a % 42);
	}

	cout << st.size() << "\n";

	return 0;
}
