#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());

	int m;
	cin >> m;
	
	while (m--)
	{
		int findNum;
		cin >> findNum;
		if (binary_search(v.begin(), v.end(), findNum))
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
	return 0;
}