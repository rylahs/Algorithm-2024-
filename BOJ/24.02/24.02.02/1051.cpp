#include <bits/stdc++.h>
using namespace std;

int arr[52][52];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<string> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = v[i][j] - '0';
		}
	}

	int res = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			for (int k = 1; k < min(n, m); k++)
			{
				if (i + k < n && j + k < m
					&& arr[i + k][j] == arr[i][j]
					&& arr[i][j + k] == arr[i][j]
					&& arr[i + k][j + k] == arr[i][j])
					res = max(res, k + 1);
			}
		}
	}

	res = res * res;
	cout << res << "\n";


	return 0;
}