#include <bits/stdc++.h>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] - '0' != i + 1)
        {
            cout << -1 << '\n';
            return 0;
        }
    }
    cout << str.length() << '\n';
  

    return 0;
}