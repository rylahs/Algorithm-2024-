#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int res = 0;
	
	// �� ������
	// left , right ������ ���� ���� ���Ѵ�. 

	// ���� n���� ũ�� left++
	// n���� ������ right++
	int left = 1, right = 1;
	while (true)
	{
		if (left > right || left > n)
			break;

		int sum = 0;
		for (int i = left; i <= right; i++)
		{
			sum += i;
		}

		if (sum == n)
		{
			res++;
			left++;
			continue;
		}

		if (sum < n)
		{
			right++;
			continue;
		}

		if (sum > n)
			left++;
		

	}

	cout << res << "\n";

	return 0;
}