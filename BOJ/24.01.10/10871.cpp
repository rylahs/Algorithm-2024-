#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (input < x)
            v.push_back(input);
    }

    for (auto e : v)
        cout << e << " ";
    cout << "\n";

    return 0;
}
