#include <bits/stdc++.h>
using namespace std;


int tomato[102][102][102];
int date[102][102][102];

int dx[6] = { 0, 0, 0, 0, -1, 1 };
int dy[6] = { 0, 0, -1, 1, 0, 0 };
int dh[6] = { -1, 1, 0, 0, 0, 0 };



int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n, h;
	cin >> m >> n >> h;



	queue<tuple<int, int, int>> q;
	for (int k = 0; k < h; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> tomato[k][i][j];
				if (tomato[k][i][j] == 1)
				{
					q.push({ k, i, j });
				}
				if (tomato[k][i][j] == 0)
					date[k][i][j] = -1;
			}
		}
	}

	while (!q.empty())
	{
		auto cur = q.front();
		int curH = get<0>(cur);
		int curX = get<1>(cur);
		int curY = get<2>(cur);
		q.pop();

		for (int dir = 0; dir < 6; dir++)
		{
			int nh = curH + dh[dir];
			int nx = curX + dx[dir];
			int ny = curY + dy[dir];

			if (nh < 0 || nh >= h || nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (date[nh][nx][ny] != -1)
				continue;
			if (tomato[nh][nx][ny] == -1)
				continue;

			date[nh][nx][ny] = date[curH][curX][curY] + 1;
			tomato[nh][nx][ny] = tomato[curH][curX][curY] + 1;
			q.push({ nh, nx, ny });
		}
	}

	bool isFull = true;
	int total_date = INT_MIN;
	for (int k = 0; k < h; k++)
	{
		if (!isFull)
			break;
		for (int i = 0; i < n; i++)
		{
			if (!isFull)
				break;
			for (int j = 0; j < m; j++)
			{
				if (date[k][i][j] == -1)
				{
					isFull = false;
					break;
				}
				if (date[k][i][j] > total_date)
					total_date = date[k][i][j];
			}
		}
	}
	
	if (!isFull)
		cout << -1 << "\n";
	else
		cout << total_date << "\n";

	return 0;
}