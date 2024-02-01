#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> number(5);

    for (int i = 0; i < number.size(); i++)
    {
        cin >> number[i];
    }

    sort(number.begin(), number.end());

    int avg = accumulate(number.begin(), number.end(), 0) / 5;
    int centerNum = number[2];

    cout << avg << "\n";
    cout << centerNum << "\n";


    return 0;
}