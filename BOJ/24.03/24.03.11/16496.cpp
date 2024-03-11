#include <bits/stdc++.h>
using namespace std;

bool cmp(const string& a, const string& b)
{
    return a + b > b + a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), cmp);

    string res = "";

    if (v[0] == "0")
    {
        cout << 0 << '\n';
        return 0;
    }

    for (int i = 0; i < n; i++)
        res += v[i];
    
    cout << res << '\n';

    return 0;
}