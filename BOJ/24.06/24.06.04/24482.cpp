#include <bits/stdc++.h>
using namespace std;

int N, M, R;
vector<vector<int>> adj;
vector<int> depth;

void dfs(int node, int d) {
    depth[node] = d;
    for (int next : adj[node]) {
        if (depth[next] == -1) {
            dfs(next, d + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> R;
    adj.resize(N + 1);
    depth.resize(N + 1, -1);

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= N; i++) {
        sort(adj[i].begin(), adj[i].end(), greater<int>());
    }

    dfs(R, 0);

    for (int i = 1; i <= N; i++) {
        cout << depth[i] << "\n";
    }

    return 0;
}