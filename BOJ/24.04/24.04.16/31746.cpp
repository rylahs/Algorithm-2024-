#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	string str = "SciComLove";

	if (n % 2 == 1)
		reverse(str.begin(), str.end());
	
	cout << str << '\n';

	return 0;
}