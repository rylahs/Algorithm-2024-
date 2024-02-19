#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string board[30];
int vis[30][30];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> board[i];

	int cnt = 0;
	int area = 0;
	vector<int> res;

	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			area = 0;
			if (board[i][j] == '1' && vis[i][j] == 0)
			{
				cnt++;
				vis[i][j] = cnt;
				q.push({ i, j });
				area++;
			}

			while (!q.empty())
			{
				auto cur = q.front();
				q.pop();

				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= n)
						continue;
					if (board[nx][ny] == '0' || vis[nx][ny] != 0)
						continue;
					
					vis[nx][ny] = vis[cur.X][cur.Y];
					area++;
					q.push({ nx, ny });
					
				}
			}
			if (area > 0)
				res.push_back(area);
		}

	}


	cout << cnt << "\n";
	sort(res.begin(), res.end());

	for (auto& e : res)
		cout << e << "\n";
	return 0;
}