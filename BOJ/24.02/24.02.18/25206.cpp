#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int subN = 20;
	double sum = 0.0;
	double cnt = 0;
	double gradeAry[] = {
		4.5, 4.0,
		3.5, 3.0,
		2.5, 2.0,
		1.5, 1.0,
		0.0
	};
	string gradeStrAry[] = {
		"A+", "A0",
		"B+", "B0",
		"C+", "C0",
		"D+", "D0",
		"F"
	};
	while (subN--)
	{
		string name, grade;
		double score, my_grade;

		cin >> name >> score >> grade;
		if (grade == "P")
			continue;
		for (int i = 0; i < 9; i++)
		{
			if (gradeStrAry[i] == grade)
				my_grade = gradeAry[i];
		}

		cnt += score;
		sum += (score * my_grade);
	}

	double res = sum / cnt;
	cout.precision(12);
	cout << res << "\n";

	return 0;
}