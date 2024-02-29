#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> sul(2);
	for (int i = 0; i < n; i++)
	{
		int vote;
		cin >> vote;
		sul[vote]++;
	}

	if (sul[0] > sul[1])
		cout << "Junhee is not cute!\n";
	else
		cout << "Junhee is cute!\n";

	return 0;
}
