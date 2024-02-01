#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> originData(9);
	for (int i = 0; i < 9; i++)
		cin >> originData[i];

	vector<int> tmp;
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i == j)
				continue;
			tmp.clear();
			sum = 0;
			for (int k = 0; k < 9; k++)
			{
				if (k == i || k == j)
					continue;
				tmp.push_back(originData[k]);
			}

			sum = accumulate(tmp.begin(), tmp.end(), 0);
			
			if (sum == 100)
				break;
		}
		if (sum == 100)
			break;
	}
	sort(tmp.begin(), tmp.end());

	for (auto& e : tmp)
		cout << e << "\n";

	return 0;
}