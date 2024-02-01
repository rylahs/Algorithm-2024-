#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> dice(3);

    for (int i = 0; i < dice.size(); i++)
        cin >> dice[i];

    sort(dice.begin(), dice.end());

    int price = 0;

    if (dice[0] == dice[1] && dice[1] == dice[2])
        price = 10000 + dice[0] * 1000;
    else if (dice[0] == dice[1] || dice[1] == dice[2])
        price = 1000 + dice[1] * 100;
    else
        price = dice[2] * 100;

    cout << price << "\n";





    return 0;
}