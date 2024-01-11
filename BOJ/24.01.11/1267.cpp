#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> callTime(n);
	for (int i = 0; i < n; i++)
		cin >> callTime[i];

	int yCompanyCost = 0, mCompanyCost = 0;

	for (int i = 0; i < n; i++)
	{
		yCompanyCost += (callTime[i] / 30 + 1) * 10;
		mCompanyCost += (callTime[i] / 60 + 1) * 15;

	}

	if (yCompanyCost == mCompanyCost)
		cout << "Y M " << yCompanyCost << "\n";

	else if (yCompanyCost < mCompanyCost)
		cout << "Y " << yCompanyCost << "\n";

	else
		cout << "M " << mCompanyCost << "\n";

	return 0;
}