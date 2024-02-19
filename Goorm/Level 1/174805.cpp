#include <bits/stdc++.h>

using namespace std;

int main(void) 
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector<string> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int res = 0;

	for (int i = 0; i < n; i++)
	{
		if (v[i].find(to_string(k)) != string::npos)
		{
			continue;
		}
		else
			res++;
	}
	cout << res << "\n";
	
	return 0;
}