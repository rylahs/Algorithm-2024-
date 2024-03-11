#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    deque<char> dq;

    for (int i = 0; i < n; i++)
    {
        while (!dq.empty() && k && dq.back() < str[i])
        {
            k--;
            dq.pop_back();
        }

        dq.push_back(str[i]);
    }

    for (int i = 0; i < dq.size() - k; i++)
        cout << dq[i];
    cout << '\n';


    return 0;
}