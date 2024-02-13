#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string rainbow[7] = { "Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet" };

	int lambda;
	cin >> lambda;

	if (lambda >= 620)
	{
		cout << rainbow[0] << "\n";
		return 0;
	}
	if (lambda >= 590)
	{
		cout << rainbow[1] << "\n";
		return 0;
	}
	if (lambda >= 570)
	{
		cout << rainbow[2] << "\n";
		return 0;
	}
	if (lambda >= 495)
	{
		cout << rainbow[3] << "\n";
		return 0;
	}
	if (lambda >= 450)
	{
		cout << rainbow[4] << "\n";
		return 0;
	}
	if (lambda >= 425)
	{
		cout << rainbow[5] << "\n";
		return 0;
	}
	if (lambda >= 380)
	{
		cout << rainbow[6] << "\n";
		return 0;
	}



	return 0;
}
