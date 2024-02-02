#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
	int n;
	cin >> n;

	stack<int> St;

	int number = 1;
	while (n--)
	{
		int k;
		cin >> k;

		if (k == number)
			number++;
		else
			St.push(k);

		while (!St.empty() && St.top() == number)
		{
			St.pop();
			number++;
		}

	}


	if (St.empty())
		cout << "Nice\n";
	else
		cout << "Sad\n";

	return 0;
}