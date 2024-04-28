#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		if ((a <= 1 && b <= 2) || (a <= 2 && b <= 1))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	
	return 0;
}