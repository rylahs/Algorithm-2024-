#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int c = 0, k = 0;
	string str;
	cin >> str;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'C')
			c++;
		else
			k++;
	}

	int res = c / (k + 1);
	if (c % (k + 1) != 0)
		res++;

	cout << res << '\n';




	return 0;
}