#include <bits/stdc++.h>
using namespace std;

vector<int> g[2000];
bool vis[2000];
bool found = false;

void dfs(int node, int depth)
{
	if (depth == 4)
	{
		found = true;
		return;
	}
	vis[node] = true;
	for (int i = 0; i < g[node].size(); i++)
	{
		int nxt = g[node][i];
		if (!vis[nxt])
			dfs(nxt, depth + 1);
		if (found)
			return;
	}
	vis[node] = false;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	for (int i = 0; i < n; i++)
	{
		fill_n(vis, n, false);
		dfs(i, 0);
		if (found)
		{
			cout << 1 << '\n';
			return 0;
		}
	}

	cout << 0 << '\n';
	return 0;
}