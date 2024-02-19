#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[52][52];
bool isvisited[52][52];

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, -1, 0, 1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int m, n, k;
		cin >> m >> n >> k;
		for (int i = 0; i < n; i++)
		{
			fill(board[i], board[i] + m, 0);
			fill(isvisited[i], isvisited[i] + m, false);
		}

		for (int i = 0; i < k; i++)
		{
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}
		queue<pair<int, int>> q;
		int cnt = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (board[i][j] == 1)
				{
					if (!isvisited[i][j])
					{
						isvisited[i][j] = true;
						q.push({ i, j });
						cnt++;
					}

					while (!q.empty())
					{
						auto cur = q.front();
						q.pop();
						for (int dir = 0; dir < 4; dir++)
						{
							int nx = cur.X + dx[dir];
							int ny = cur.Y + dy[dir];

							if (nx < 0 || nx >= n || ny < 0 || ny > m)
								continue;
							if (isvisited[nx][ny])
								continue;
							if (board[nx][ny] != 1)
								continue;

							isvisited[nx][ny] = true;
							q.push({ nx, ny });
						}
					}
				}
			}
		}
		cout << cnt << "\n";
	}


	return 0;
}