#include <bits/stdc++.h>
using namespace std;

int fibo[41][2];
void fiboCalc()
{
	fibo[0][0] = 1, fibo[0][1] = 0;
	fibo[1][0] = 0, fibo[1][1] = 1;
	fibo[2][0] = 1, fibo[2][1] = 1;

	for (int i = 3; i < 41; i++)
	{
		fibo[i][0] = fibo[i - 2][0] + fibo[i - 1][0];
		fibo[i][1] = fibo[i - 2][1] + fibo[i - 1][1];
	}

	return;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	fiboCalc();

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int input;
		cin >> input;

		cout << fibo[input][0] << " " << fibo[input][1] << "\n";

	}

	return 0;
}