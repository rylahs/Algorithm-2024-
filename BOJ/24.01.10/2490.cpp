#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // µî °¹¼ö 
    vector<char> yut = { 'D', 'C', 'B', 'A', 'E' };

    for (int t = 0; t < 3; t++)
    {
        int oneCnt = 0;
        for (int i = 0; i < 4; i++)
        {
            int input;
            cin >> input;
            if (input == 1)
                oneCnt++;
        }

        cout << yut[oneCnt] << "\n";

    }


    return 0;
}