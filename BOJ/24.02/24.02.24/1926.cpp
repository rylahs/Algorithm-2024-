#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int pic[502][502];
bool vis[502][502];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < m; j++)
		{
			cin >> pic[i][j];
		}
	}

	queue<pair<int, int>> q;
	int area = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			area = 0;
			if (pic[i][j] == 1 && !vis[i][j])
			{
				vis[i][j] = true;
				area = 1;
				q.push({ i, j });
			}
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
					if (vis[nx][ny] || pic[nx][ny] == 0)
 						continue;

					vis[nx][ny] = true;
					area++;
					q.push({ nx, ny });
				}

			}
			if (area != 0)
				v.push_back(area);
		}


	}



	if (v.empty())
		cout << 0 << "\n" << 0 << "\n";
	else
	{
		cout << v.size() << "\n";
		cout << *max_element(v.begin(), v.end()) << "\n";
	}
	return 0;
}