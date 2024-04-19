#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	vector<int> va(a), vb(b);
	vector<int> ans;

	for (int i = 0; i < a; i++)
	{
		int num; cin >> num;
		va[i] = num;
	}
	for (int i = 0; i < b; i++)
	{
		int num; cin >> num;
		vb[i] = num;
	}

	sort(va.begin(), va.end());
	sort(vb.begin(), vb.end());

	for (auto& e : va)
	{
		if (binary_search(vb.begin(), vb.end(), e))
			continue;
		ans.push_back(e);
	}

	cout << ans.size() << '\n';
	for (auto& e : ans)
		cout << e << ' ';
	return 0;
}