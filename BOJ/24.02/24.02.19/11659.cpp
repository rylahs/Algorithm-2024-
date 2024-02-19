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
	{
		int input;
		cin >> input;
		if (i == 0)
		{
			v[i] = input;
			continue;
		}
		
		v[i] = v[i - 1] + input;
	}	

	while (m--)
	{
		int start, end;
		cin >> start >> end;

		int res = 0;
		if (start == 1)
			res = v[end - 1];

		else
		{
			res = v[end - 1] - v[start - 2];
		}

		cout << res << "\n";
	}


	return 0;
}