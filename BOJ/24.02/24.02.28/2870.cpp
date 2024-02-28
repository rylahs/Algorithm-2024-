#include <bits/stdc++.h>
using namespace std;

bool cmp(const string& a, const string& b)
{
	if (a.length() < b.length())
		return true;
	if (a.length() == b.length())
		return a.compare(b) < 0;
	return false;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<string> res;

	while (n--)
	{
		string input;
		cin >> input;

		vector<string> tmp;
		string num = "";

		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] >= '0' && input[i] <= '9')
				num += input[i];

			else
			{
				if (num == "")
					continue;
				tmp.push_back(num);
				num = "";
			}
		}

		if (num != "")
			tmp.push_back(num);

		for (int i = 0; i < tmp.size(); i++)
		{
			string num = tmp[i];
			string newNum = "";
			
			int len = num.length();
			for (int j = 0; j < len; j++)
			{
				if (num[j] == '0')
					continue;
				else
				{
					newNum = num.substr(j);
					break;
				}
			}

			if (newNum == "")
				newNum = "0";
			res.push_back(newNum);
		}
	}

	sort(res.begin(), res.end(), cmp);

	for (auto& e : res)
		cout << e << '\n';


	return 0;
}