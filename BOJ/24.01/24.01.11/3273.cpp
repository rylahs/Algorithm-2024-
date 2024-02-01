#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);
	
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int findSumNum;
	cin >> findSumNum;

	sort(v.begin(), v.end());

	int count = 0;

	int left = 0, right = n - 1;
	int temp = 0;
	while (left < right)
	{
		temp = v[left] + v[right];

		if (temp == findSumNum)
		{
			count++;
			left++;
			right--;
		}
		else if (temp < findSumNum)
		{
			left++;
		}
		else
			right--;
	}

	cout << count << "\n";



	return 0;
}