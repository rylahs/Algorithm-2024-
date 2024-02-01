#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    vector<bool> isPrime(1001, true);
    isPrime[0] = false, isPrime[1] = false;

    for (int i = 2; i * i <= 1001; ++i) 
    {
        if (isPrime[i]) 
        {
            for (int j = i * i; j <= 1001; j += i) 
            {
                isPrime[j] = false;
            }
        }
    }

	int n;
	cin >> n;

    int primeCnt = 0;
	while (n--)
	{
        int input;
        cin >> input;

        if (isPrime[input])
            primeCnt++;
	}

    cout << primeCnt << "\n";

	return 0;
}