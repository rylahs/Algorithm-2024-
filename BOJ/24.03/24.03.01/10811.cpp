#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		v[i] = i + 1;
		
	
	while (m--)
	{
		int s, e;
		cin >> s >> e;

		reverse(v.begin() + s - 1, v.begin() + e);

	}

	for (auto& e : v)
		cout << e << ' ';



	return 0;
}