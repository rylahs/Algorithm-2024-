#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;
	for (int i = 1; i <= 20; i++)
		v.push_back(i);

	int t = 10;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		reverse(v.begin() + a - 1, v.begin() + b);

	}

	for (auto& e : v)
		cout << e << " ";
	cout << "\n";


	return 0;
}