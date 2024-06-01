#include <bits/stdc++.h>

using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;

    long long numbers[] = { a, b, c };
    sort(numbers, numbers + 3);

    cout << numbers[1] << '\n';

    return 0;
}
