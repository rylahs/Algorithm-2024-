#include <bits/stdc++.h>
using namespace std;

const int MX = 2000000;
const int HALF = 1000000;
vector<bool> v(MX + 1);
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		
		v[HALF + t] = true;
	}

	for (int i = MX; i >= 0; i--)
	{
		if (v[i])
			cout << i - HALF << '\n';
	}

	
	
	return 0;
}