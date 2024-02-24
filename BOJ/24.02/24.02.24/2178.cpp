#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
string maze[103];
int dist[102][102];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> maze[i];

	queue<pair<int, int>> q;
	dist[0][0] = 1;
	q.push({ 0, 0 });

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
			if (maze[nx][ny] != '1' || dist[nx][ny] != 0)
				continue;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			
			q.push({ nx,ny });
		}
	}

	cout << dist[n - 1][m - 1] << "\n";
	return 0;
}