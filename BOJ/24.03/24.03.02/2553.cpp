#include <bits/stdc++.h>
using namespace std;

#define MOD 10000000
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long fact = 1;

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        fact *= i;
        fact %= MOD;
        while (fact % 10 == 0)
            fact /= 10;
    }

    cout << fact % 10 << '\n';

    return 0;
}
