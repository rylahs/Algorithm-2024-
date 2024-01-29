#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 8;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}

	bool isAsc = true;
	bool isDesc = true;

	for (int i = 0; i < v.size(); i++)
	{
		if (!isAsc && !isDesc)
			break;

		if ((v[i] - i) != 1)
		{
			isAsc = false;
		}

		if ((v[i] + i != n))
		{
			isDesc = false;
		}
	}

	if (isAsc)
		cout << "ascending\n";
	else if (isDesc)
		cout << "descending\n";
	else
		cout << "mixed\n";

	return 0;
}