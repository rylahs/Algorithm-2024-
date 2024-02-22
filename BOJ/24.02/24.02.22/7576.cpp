#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int tomato[1002][1002];
int dist[1002][1002];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tomato[i][j];

			if (tomato[i][j] == 1)
			{
				q.push({ i, j });
			}
			if (tomato[i][j] == 0)
				dist[i][j] = -1;
		}
	}

	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx > n || ny < 0 || ny > m)
				continue;

			if (tomato[nx][ny] == -1 || dist[nx][ny] >= 0)
				continue;

			tomato[nx][ny] = tomato[cur.X][cur.Y] + 1;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;

			q.push({ nx, ny });
		}
	}

	bool isFull = true;
	int mx = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		if (!isFull)
			break;
		for (int j = 0; j < m; j++)
		{
			if (tomato[i][j] == 0)
			{
				isFull = false;
				break;
			}
			if (dist[i][j] > mx)
				mx = dist[i][j];
		}
	}

	if (isFull)
		cout << mx << "\n";
	else
		cout << -1 << "\n";

	return 0;
}