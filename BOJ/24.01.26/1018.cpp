#include <bits/stdc++.h>
using namespace std;
string rightWB[] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

string rightBW[] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		v.push_back(input);
	}

	int minDiff = 67;
	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			int startN = i;
			int startM = j;
			int countBW = 0;
			int countWB = 0;
			for (int k = startN; k < startN + 8; k++)
			{
				for (int l = startM; l < startM + 8; l++)
				{
					if (v[k][l] != rightBW[k - startN][l - startM])
						countBW++;
					if (v[k][l] != rightWB[k - startN][l - startM])
						countWB++;
				}
			}
			int countMin = min(countBW, countWB);
			minDiff = min(minDiff, countMin);
		}
	}
	cout << minDiff << "\n";

	return 0;
}