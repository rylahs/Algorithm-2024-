#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	int board[102][102] = {};

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int num;
			cin >> num;
			board[i][j] += num;
		}

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << board[i][j] << ' ';
		}
		cout << '\n';
	}
}