#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;

	int fiboA = 1, fiboB = 0;
	

	int tmpA, tmpB;

	for (int i = 0; i < k; i++)
	{
		tmpA = fiboB;
		tmpB = fiboA + fiboB;

		fiboA = tmpA;
		fiboB = tmpB;
	}

	cout << fiboA << ' ' << fiboB << '\n';

	return 0;
}