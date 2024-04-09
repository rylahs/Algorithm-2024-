#include <bits/stdc++.h>

using namespace std;


int alpha[26];
int result[26];

bool state;
string res, ori;

bool check() 
{ 
    for (int i = 0; i < 26; i++) 
        if (alpha[i] != result[i]) 
            return false;

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    for (int k = 0; k < testCase; k++) 
    {
        cin >> res >> ori;
        
        fill_n(alpha, 26, 0);
        fill_n(result, 26, 0);
        
        state = false;

        for (int i = 0; i < ori.length(); i++)
        {
            result[(int)(ori[i] - 'a')]++;
            if (i < res.length()) alpha[(int)(res[i] - 'a')]++;
        }
        if (check()) { state = true; }
        else {
            for (int i = ori.length(); i < res.length(); i++)
            {
                alpha[(int)res[i] - 'a']++;
                alpha[(int)res[i - ori.length()] - 'a']--;

                if (check()) {
                    state = true;
                    break;
                }
            }
        }

        if (state) { cout << "YES\n"; }
        else { cout << "NO\n"; }
    }

    return 0;
}