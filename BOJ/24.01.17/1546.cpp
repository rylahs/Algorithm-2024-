#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<double> score;
	double maxScore = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		double input;
		cin >> input;

		score.push_back(input);

		maxScore = max(maxScore, input);
	}
	double sum = 0;
	for (auto& e : score)
	{
		e = (e / maxScore) * 100;
		sum += e;
	}
	
	cout.precision(12);
	double avg = sum / n;

	cout << avg << "\n";




	return 0;
}