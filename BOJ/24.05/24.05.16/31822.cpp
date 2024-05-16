#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string re;
	cin >> re;

	int n;
	cin >> n;

	int res = 0;

	string k = re.substr(0, 5);
	while (n--)
	{
		string tmp;
		cin >> tmp;

		if (tmp.substr(0, 5) == k)
			res++;
		
	}

	cout << res << '\n';

	return 0;
}