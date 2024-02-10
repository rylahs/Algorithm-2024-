#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		string func;
		cin >> func;

		int n;
		cin >> n;

		deque<int> dq;
		string input;
		cin >> input;

		int nums = 0;
		bool isFail = false;
		for (int i = 1; i + 1 < input.length(); i++)
		{
			if (input[i] == ',')
			{
				dq.push_back(nums);
				nums = 0;
				continue;
			}
			nums = 10 * nums + (input[i] - '0');
		}
		if (nums != 0)
			dq.push_back(nums);

		int revFlag = 0;
		for (auto& e : func)
		{
			if (e == 'R')
			{
				revFlag = 1 - revFlag;
				continue;
			}
			else if (e == 'D')
			{
				if (dq.empty())
				{
					isFail = true;
					break;
				}
				if (revFlag == 0)
					dq.pop_front();
				else
					dq.pop_back();
			}
		}
		if (isFail)
			cout << "error\n";
		else
		{
			if (revFlag == 1)
				reverse(dq.begin(), dq.end());
			cout << "[";
			for (int i = 0; i < dq.size(); i++)
			{
				cout << dq[i];
				if (i + 1 != dq.size())
					cout << ",";
			}
			cout << "]\n";
		}
	}

	return 0;
}