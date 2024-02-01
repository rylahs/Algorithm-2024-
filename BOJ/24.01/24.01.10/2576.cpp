#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> oddNum;
    for (int i = 0; i < 7; i++)
    {
        int input;
        cin >> input;
        if (input % 2 == 1)
            oddNum.push_back(input);
    }
    if (oddNum.size() == 0)
    {
        cout << -1 << "\n";
    }
    else
    {
        sort(oddNum.begin(), oddNum.end());

        int sum = accumulate(oddNum.begin(), oddNum.end(), 0);
        int minNum = oddNum[0];

        cout << sum << "\n";
        cout << minNum << "\n";
    }
    return 0;
}