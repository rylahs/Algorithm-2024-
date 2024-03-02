#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 10;
    vector<int> v(n);
    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ump[v[i]]++;
    }

    int avg = accumulate(v.begin(), v.end(), 0) / n;
    int mxR = -1;
    int mxV = -1;
    for (auto& e : ump)
    {
        if (e.second > mxR)
        {
            mxR = e.second;
            mxV = e.first;
        }
    }

    cout << avg << '\n' << mxV << '\n';

    return 0;
}
