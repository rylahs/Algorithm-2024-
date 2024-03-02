#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> table;
    for (int num : arr)
        table[num]++;

    long long answer = 1;
    for (auto& pair : table)
        answer = (answer * (pair.second + 1)) % MOD;

    cout << (answer - 1 + MOD) % MOD << "\n";

    return 0;
}
