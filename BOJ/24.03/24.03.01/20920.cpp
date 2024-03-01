#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b)
{
    if (a.second != b.second)
        return a.second > b.second;

    if (a.first.length() != b.first.length())
        return a.first.length() > b.first.length();

    return a.first < b.first;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, int> ump;

    int n, m;
    cin >> n >> m;

    while (n--)
    {
        string str;
        cin >> str;

        if (str.length() < m)
            continue;
        
        ump[str] += 1;
    }

    vector<pair<string, int>> v(ump.begin(), ump.end());
    sort(v.begin(), v.end(), compare);

    for (auto& e : v)
        cout << e.first << "\n";

    return 0;
}