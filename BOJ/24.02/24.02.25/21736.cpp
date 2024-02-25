#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

char campus[602][602];
bool vis[602][602];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> campus[i][j];
			if (campus[i][j] == 'I')
			{
				vis[i][j] = true;
				q.push({ i, j });
				
			}
		}
	}
	int meeting = 0;
	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;

			if (campus[nx][ny] == 'X' || vis[nx][ny])
				continue;

			if (campus[nx][ny] == 'P')
				meeting++;
			vis[nx][ny] = true;
			q.push({ nx, ny });

		}
	}

	if (meeting == 0)
		cout << "TT\n";
	else
		cout << meeting << "\n";
	return 0;
}