#include <bits/stdc++.h>
using namespace std;



int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<long long> v(n);

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		reverse(str.begin(), str.end());

		v[i] = stoll(str);
	}

	sort(v.begin(), v.end());

	for (auto& e : v)
		cout << e << '\n';


	return 0;
}