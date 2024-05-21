#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int w, h;
	cin >> w >> h;
	
	double rec = w + h;
	double dig = sqrt(w * w + h * h);
	double diff = rec - dig;

	cout << fixed << setprecision(9) << diff << '\n';


	return 0;
}